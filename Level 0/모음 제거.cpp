// ������ ������ ����? �ǹ��� ������ ��. 
// �����ϱ� �翬�� ������ �Ǵ� �ǵ�...
// ���̳ʽ� ��ȣ�� ��� ó���Ǵ°���?
// �ϸ鼭 Ǯ�� ������� �ٸ���� �ڵ� �ô�.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string solution(string s) {
    string answer = "";

    vector<int> v;
    string tmp;

    // �������� �����Ͽ�
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') { // ������ �ƴϸ�, tmp ���ڿ��� ���̱�
            tmp += s[i];
        }
        else { // �����̸�, ���Ϳ� tmp�� int�� �����Ͽ� push�� ��, tmp ����
            v.push_back(stoi(tmp));
            tmp.clear();
        }
    }
    // ���Ϳ� tmp�� ���������� �ٲپ� �ֱ� (������ ��)
    v.push_back(stoi(tmp));

    // sorting
    sort(v.begin(), v.end());

    // �� �� (�ּ�) + ���� + �� �� (�ִ�)
    answer += to_string(v.front()) + " " + to_string(v.back());
    return answer;
}