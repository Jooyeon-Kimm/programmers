// �ٸ� ��� Ǯ�� �ô�
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i, k;

    for (i = 0; i < s.length(); i++) {
        int first = s[i];   // ù ��° ����
        int firstCnt = 0;   // ù ��° ������ ����
        int otherCnt = 0;   // ù ��° ���ڿ� �ٸ� ������ ����

        for (k = i; k < s.length(); k++) {
            if (first == s[k]) {    // ù ��° ���ڿ� ������
                firstCnt++;
            }
            else {                  // ù��° ���ڿ� �ٸ���
                otherCnt++;
            }

            if (firstCnt == otherCnt) break;
            // ������, ���� for �� Ż���ؼ� ���ڿ� �ڸ��� ����.
        }
        
        i = k;      // ���ڿ� �ڸ���
        answer++;   // �ڸ� ������ answer 1 ����

    }
    return answer;
}

int main(void) {

    string X = "abracadabra";
    cout << solution(X);
}