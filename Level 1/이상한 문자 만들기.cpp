#include <string>

using namespace std;

string solution(string s) {
    int idx = 0;

    for (int i = 0; i < s.size(); i++) {

        // �����̸� index = 0���� �ʱ�ȭ
        if (s[i] == ' ') {
            idx = 0;
            continue;
        }

        // ¦����° ���ڴ� �ҹ��ڷ� ��ȯ
        if (idx % 2) {
            s[i] = tolower(s[i]);
        }
        // Ȧ����° ���ڴ� �빮�ڷ� ��ȯ
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

    // �� �κ��� ���߷��� ����Ͽ���
    // tmp�� �� ���ڿ��� �ƴ϶��, words�� �߰��ϱ�
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
        // ������ ���ڸ� �ڿ� ���� ����ϸ� �ȵȴ�.
        if(i!= words.size()-1) answer += " ";
    }

    return answer;
}

*/