#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    answer += toupper(s[0]);

    for (int i = 1; i < s.size(); i++) {
        // ���� ���ڰ� �����̸�, �빮�ڷ�
        if (s[i - 1] == ' ') {
            answer += toupper(s[i]);
        }
        // ���� ���ڰ� ������ �ƴϸ�, �ҹ��ڷ�
        else {
            answer += tolower(s[i]);
        }
    }

    return answer;
}