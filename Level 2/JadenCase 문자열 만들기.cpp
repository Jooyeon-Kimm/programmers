#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    answer += toupper(s[0]);

    for (int i = 1; i < s.size(); i++) {
        // 이전 문자가 공백이면, 대문자로
        if (s[i - 1] == ' ') {
            answer += toupper(s[i]);
        }
        // 이전 문자가 공백이 아니면, 소문자로
        else {
            answer += tolower(s[i]);
        }
    }

    return answer;
}