#include <string>
#include <cstring> // c_str()
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for (int i = 0; i < seoul.size(); i++) {
        if (strcmp("Kim", seoul[i].c_str()) == 0) {
            answer += to_string(i);
        }
    }
    return answer;
}

int main(void) {
    vector<string> seoul = { "Jane", "Kim" };
    string result = solution(seoul);
    cout << result;

    return 0;

}