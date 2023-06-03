// 다른 사람 풀이 봤다
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i, k;

    for (i = 0; i < s.length(); i++) {
        int first = s[i];   // 첫 번째 문자
        int firstCnt = 0;   // 첫 번째 문자의 개수
        int otherCnt = 0;   // 첫 번째 문자와 다른 문자의 개수

        for (k = i; k < s.length(); k++) {
            if (first == s[k]) {    // 첫 번째 글자와 같으면
                firstCnt++;
            }
            else {                  // 첫번째 글자와 다르면
                otherCnt++;
            }

            if (firstCnt == otherCnt) break;
            // 같으면, 내부 for 문 탈출해서 문자열 자르러 간다.
        }
        
        i = k;      // 문자열 자르기
        answer++;   // 자를 때마다 answer 1 증가

    }
    return answer;
}

int main(void) {

    string X = "abracadabra";
    cout << solution(X);
}