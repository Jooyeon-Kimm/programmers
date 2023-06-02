#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    map<string, string> m;
    for (auto i : db) {
        m[i[0]] = i[1]; // (key, value) ��Ī
    }

    // �� m���� id�� ã������
    if (m.find(id_pw[0]) != m.end()) {
        
        // ��й�ȣ�� ������
        if (m[id_pw[0]] == id_pw[1]) return "login";

        // ��й�ȣ�� �ٸ���
        else return "wrong pw";
    }

    // id���� ��ã������
    else return "fail";
}
