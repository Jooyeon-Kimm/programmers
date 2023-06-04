// 스스로 풀었다.
#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    int i;
    vector<char> lower(26);
    vector<char> upper(26);

    // initialize the vectors
    for (i = 0; i < 26; i++) {
        lower[i] = (char)(97 + i);  // ASCII CODE of 'a': 97
        upper[i] = (char)(65 + i);  // ASCII CODE of 'A': 65
    }

    for (i = 0; i < s.size(); i++) {
        // If upper case,
        if (islower(s[i])) {
            // s[i] + n <= ASCII CODE of 'z' : 122
            if ((int)s[i] + n <= 122) {
                answer += (char)(s[i] + n);
            }
            else {
                answer += (char)(s[i] + n - 123 + 97);
            }
        }

        // if lower case,
        else if (isupper(s[i])) {
            // s[i] + n <= ASCII CODE of 'Z' : 90
            if ((int)s[i] + n <= 90) {
                answer += (char)(s[i] + n);
            }
            else {
                answer += (char)(s[i] + n - 91 + 65);
            }
        }

        // if blank
        if (s[i] == ' ') {
            answer += ' ';
        }
    }


    return answer;
}
int main(void) {

    string s = "ab";
    int n = 1;
    cout << solution(s, n);

    
    return 0;
}

/* 
더 똑똑한 풀이 (다른 분 풀이)
circular queue를 이용해야하나? 고민했었는데
이런 문제는 "%" 나머지 연산자를 이용하면 되는 것이었다.

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for(auto &a: s) {
        if(islower(a)) {
            if(!islower(a+=n%26))
                a-=26;
        } else if(isupper(a)) {
            if(!isupper(a+=n%26))
                a-=26;
        }
    }
    return s;
}

*/