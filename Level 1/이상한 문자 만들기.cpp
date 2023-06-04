#include <string>

using namespace std;

string solution(string s) {
    int idx = 0;

    for (int i = 0; i < s.size(); i++) {

        // 공백이면 index = 0으로 초기화
        if (s[i] == ' ') {
            idx = 0;
            continue;
        }

        // 짝수번째 문자는 소문자로 변환
        if (idx % 2) {
            s[i] = tolower(s[i]);
        }
        // 홀수번째 문자는 대문자로 변환
        else {
            s[i] = toupper(s[i]);
        }
        idx++;
    }

    return s;
}


/*
wrong answer...
string solution(string s) {
    string answer = "";
    vector<string> words;

    string tmp = "";
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            tmp +=  s[i];

        }
        else if(s[i] == ' ' || s[i] == '\0') {
            words.push_back(tmp);
            tmp = "";
        }
    }

    // 이 부분을 빠뜨려서 고생하였음
    // tmp가 빈 문자열이 아니라면, words에 추가하기
    if (!tmp.empty()) {
        words.push_back(tmp);
    }

    for (int i = 0; i < words.size(); i++) {
        for (int k = 0; k < words[i].size(); k++) {
            if (k % 2 == 0) {
                answer += toupper(words[i][k]);
            }
            else {
                answer += tolower(words[i][k]);
            }
        }
        // 마지막 문자면 뒤에 공백 출력하면 안된다.
        if(i!= words.size()-1) answer += " ";
    }

    return answer;
}

*/