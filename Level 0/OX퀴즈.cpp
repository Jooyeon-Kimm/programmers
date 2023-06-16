#include <string>
#include <vector>
#include <sstream>  // isstringstream, iss
#include <iostream>

using namespace std;

// 공백을 기준으로 토크나이징 하는 방법 알아두기 (중요)
vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for (const string& q : quiz) {
        istringstream iss(q);
        vector<string> tokens;
        string token;

        while (iss >> token) {
            tokens.push_back(token);
        }



        int left_val = stoi(tokens[0]);
        int right_val = stoi(tokens[2]);
        int result_val = stoi(tokens[4]);
        cout << left_val << tokens[1] << right_val << tokens[3] << result_val << endl;

        if (tokens[1] == "+") {
            if (left_val + right_val == result_val)
                answer.push_back("O");
            else
                answer.push_back("X");
        }
        else if (tokens[1] == "-") {
            if (left_val - right_val == result_val)
                answer.push_back("O");
            else
                answer.push_back("X");
        }
    }
    return answer;
}

/*
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string str = "Hello World How Are You";
    vector<string> tokens;
    istringstream iss(str);
    string token;

    while (iss >> token) {
        tokens.push_back(token);
    }

    for (const string& t : tokens) {
        cout << t << endl;
    }

    return 0;
}

*/