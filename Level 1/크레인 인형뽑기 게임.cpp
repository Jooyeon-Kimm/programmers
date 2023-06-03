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
                // 스택이 비어있으면, push
                if (st.empty()) {
                    st.push(nonZero);
                }

                // 스택이 비어있지 않으면
                else {
                    // 스택의 맨 위 원소와 nonZero가 같으면, pop
                    if (st.top() == nonZero) {
                        st.pop();
                        answer += 2;
                    }
                    // 스택의 맨 위 원소와 nonZero가 다르면, push
                    else {
                        st.push(nonZero);
                    }
                }

                // pop한 자리는 부분은 0으로 변경한다.
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