#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    map<string, string> m;
    for (auto i : db) {
        m[i[0]] = i[1]; // (key, value) 매칭
    }

    // 맵 m에서 id를 찾았으면
    if (m.find(id_pw[0]) != m.end()) {
        
        // 비밀번호가 같으면
        if (m[id_pw[0]] == id_pw[1]) return "login";

        // 비밀번호가 다르면
        else return "wrong pw";
    }

    // id부터 못찾았으면
    else return "fail";
}
