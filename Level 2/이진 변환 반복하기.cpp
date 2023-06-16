// 스스로 풂
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// int형 n을 이진변환하여 string으로 변환하는 함수
string toTwo(int n) {
    string res = "";
    while (n > 0) {
        res = to_string(n % 2) + res;
        n = n / 2;
    }
    return res;
}

vector<int> solution(string s) {
    vector<int> answer;
    int removedZero = 0;    // 제거된 0의 개수
    int convertCnt = 0;     // 변환한 횟수

    while (1) {
        int one = 0;    // 1의 개수
        int zero = 0;   // 0의 개수

        // 0과 1의 개수 세기
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') zero++;
            if (s[i] == '1') one++;
        }

        // s 비우고, 1의 개수(문자열의 길이)를 이진변환하기
        s.clear();
        s = toTwo(one);

        // 제거한 0의 개수와 변환 횟수 세기
        removedZero += zero;
        convertCnt++;

        cout << s << endl;

        // 문자열이 1이 되면 멈추기
        if (s == "1") break;
    }

    answer.push_back(convertCnt);
    answer.push_back(removedZero);

    return answer;
}

int main(void) {
    string s = "110010101001";
    solution(s);
}