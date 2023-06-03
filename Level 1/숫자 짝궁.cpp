// 한 번에 풀었다.
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> numX(10, 0);
    vector<int> numY(10, 0);
    vector<int> numZ(10, -1);
    int i, now;

    for (i = 0; i < X.length(); i++) {
        now = X[i] - '0';
        numX[now]++;
    }
    for (i = 0; i < Y.length(); i++) {
        now = Y[i] - '0';
        numY[now]++;
    }
    for (i = 0; i <= 9; i++) {
        numZ[i] = min(numX[i], numY[i]);
    }

    int cnt = 0;    // 0이 아닌 숫자 세기
    for (i = 9; i >= 0; i--) {
        while (numZ[i] > 0) {
            answer += to_string(i);
            numZ[i]--;
            cnt++;
        }
    }

    // 001, 00 같은 case 예외처리
    if ( answer[0] == '0') {
        answer = "0";
    }

    // 중복되는 숫자가 없으면, -1
    if (cnt == 0) {
        answer = "-1";
    }


    return answer;
}

int main(void) {

    string X = "100";
    string Y = "2345";
    cout << solution(X, Y);
}