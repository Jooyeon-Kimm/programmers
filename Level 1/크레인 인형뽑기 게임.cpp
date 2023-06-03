#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

void stackPrint(stack<int> st, int size) {
    cout << "stack print: ";
    for (int i = 0; i < size; i++) {
        cout  << st.top() << " ";
        st.pop();
    }
    cout << endl << endl;
}

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;

    int row = board.size();
    int col = board[0].size();
    
    stack<int> st;

    cout << "row: " << row << endl;
    cout << "col: " << col << endl;

    for (int i = 0; i < row; i++) {
        for (int k = 0; k < col; k++) {
            cout << board[i][k] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < moves.size(); i++) {
        for (int k = 0; k < col; k++) {
            int nonZero = board[k][moves[i] - 1];

			if (nonZero != 0) {
                // ������ ���������, push
                if (st.empty()) {
                    st.push(nonZero);
                }

                // ������ ������� ������
                else {
                    // ������ �� �� ���ҿ� nonZero�� ������, pop
                    if (st.top() == nonZero) {
                        st.pop();
                        answer += 2;
                    }
                    // ������ �� �� ���ҿ� nonZero�� �ٸ���, push
                    else {
                        st.push(nonZero);
                    }
                }

                // pop�� �ڸ��� �κ��� 0���� �����Ѵ�.
                board[k][moves[i] - 1] = 0;
                break;

			}
        }
    }

    return answer;
}


int main(void) {

    vector<vector<int>> board = { {0, 0, 0, 0, 0}, {0, 0, 1, 0, 3}, {0, 2, 5, 0, 1}, {4, 2, 4, 4, 2}, {3, 5, 1, 3, 1} };
    vector<int> moves = { 1, 5, 3, 5, 1, 2, 1, 4 };

    cout<<"ans:"<<solution(board, moves);
}