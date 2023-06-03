// 구현하는데 좀 오래 걸렸다.
#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

int distance(vector<int> previous, vector<int> current) {
    int x = previous[0] - current[0];
    int y = previous[1] - current[1];

    return abs(x) + abs(y);
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    stack<vector<int>> left, right;
    left.push({ 4,1 });
    right.push({ 4,3 });

    for (int i = 0; i < numbers.size(); i++) {
        int num = numbers[i];


        // 현재 위치 left stack에 push
        if (num == 1 || num == 4 || num == 7) {
            left.push({ (num / 3) + 1, 1 });
            answer += "L";
        }

        // 현재 위치 right stack에 push
        else if (num == 3 || num == 6 || num == 9) {
            right.push({ (num / 3), 3 });
            answer += "R";
        }

        // left_len, right_len 비교하기
        else if (num == 2 || num == 5 || num == 8 || num == 0) {
            stack<vector<int>> now; // 현재 키패드 위치

            // num 이 0이면, 11로 대체하기
            if (num == 0) num = 11;
            now.push({ (num / 3) + 1, 2 });


            int left_len = distance(now.top(), left.top());
            int right_len = distance(now.top(), right.top());

            if (left_len > right_len) {
                answer += "R";
                right.push(now.top());
            }
            else if (left_len < right_len) {
                answer += "L";
                left.push(now.top());
            }
            else {
                if (hand == "left") {
                    answer += "L";
                    left.push(now.top());
                }

                else {
                    answer += "R";
                    right.push(now.top());
                }
            }
        }
    }

    return answer;
}