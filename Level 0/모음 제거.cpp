// 음수도 정수로 들어가나? 의문을 가지게 됨. 
// 정수니까 당연히 음수도 되는 건데...
// 마이너스 기호는 어떻게 처리되는거지?
// 하면서 풀기 어려워서 다른사람 코드 봤다.

#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string solution(string s) {
    string answer = "";

    vector<int> v;
    string tmp;

    // 공백으로 구분하여
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') { // 공백이 아니면, tmp 문자열에 붙이기
            tmp += s[i];
        }
        else { // 공백이면, 벡터에 tmp를 int로 변형하여 push한 후, tmp 비우기
            v.push_back(stoi(tmp));
            tmp.clear();
        }
    }
    // 벡터에 tmp를 정수형으로 바꾸어 넣기 (마지막 수)
    v.push_back(stoi(tmp));

    // sorting
    sort(v.begin(), v.end());

    // 맨 앞 (최소) + 공백 + 맨 뒤 (최대)
    answer += to_string(v.front()) + " " + to_string(v.back());
    return answer;
}