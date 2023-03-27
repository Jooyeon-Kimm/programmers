#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;

    // 문자열 길이 판단
    if (s.size() == 4 || s.size() == 6)
        answer = true;
    else answer = false;

    // 아스키 코드로, 숫자가 아니면 false
    for (int i = 0; i < s.size(); i++) {
        if (s[i] > '9' || s[i] < '0')
            answer = false;
    }

    return answer;
}