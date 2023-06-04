// 다른 사람들은 쉬웠다는데, 나는 어려웠다.
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; i++)
    {
        string tmp = "";
        
        // 비트 OR 연산자를 사용하는 것이 핵심이다.
        // 여기서 비트 연산자 사용할 줄 모르고, 
        // 2진수 변환 함수를 작성하려고 해서 어려웠다.
        arr1[i] = arr1[i] | arr2[i];

        // tmp의 크기가 n과 같아질 때까지
        while (tmp.size() != n)
        {
            // 나머지가 짝수이면 공백
            if (arr1[i] % 2 == 0)
                tmp.push_back(' ');

            // 나머지가 홀수이면 샵
            else
                tmp.push_back('#');

            // 몫 재설정
            arr1[i] /= 2;
        }

        // 뒤집어주기
        reverse(tmp.begin(), tmp.end());
        answer.push_back(tmp);
    }
    return answer;
}

/*
문제의 핵심은 OR 연산을 이용하는 것


arr1과 arr2의 i번째에 있는 두 수를 
or연산을 통해 arr1[i] 번째에 다시 저장한다.

이때 string형 tmp를 선언한다.
OR 연산을 통해 나온 결과를 이진법을 통해 해석해야 한다.

2로 나누었을 때 나머지가 0이면 ' '(공백)을 tmp에 넣어주고,
나머지가 1이면 '#'을 tmp에 넣어준다.

이때, tmp의 사이즈는 n이어야 한다.

while문을 통해 n만큼 문자를 넣어주고,
answer에 넣기 전에 reverse를 통해 
tmp를 뒤집어주었다.

(tmp에 거꾸로 들어가기 때문에 바로잡기 위해 
reverse() 함수를 사용하였다.)



이 문제에서 많이 틀리는 부분이 
아마 해석한 결과의 길이와 n이 같지 않아서일 것 같다

n의 길이만큼 채워져야 하기 때문에 
이 부분만 조심하면 쉽게 풀 수 있을 것이다
*/

int main(void) {

    vector<int> arr1 = { 9, 20, 28, 18, 11 };
    vector<int> arr2 = { 30, 1, 21, 17, 28 };
    int n = 5;

    cout << solution(n, arr1, arr2);

    return 0;
}


/*
시간 초과의 원인 함수:
이진수로 변환하는 함수
int toTwo(int n, int m) { // n은 숫자, m은 비밀지도의 한 변의 크기
    int answer;
    int remainder; // 나머지

    // 몫이 0보다 클 때까지
    while (n / 2 >= 0) {
        remainder = n % 2;
        n = n / 2;
        answer = remainder * m;
        m--;
    }

    return answer;
}

string toTwo(int n, int m) { // n은 숫자, m은 비밀지도의 한 변의 크기
    string answer = "";

    for (int i = m-1; i >=0; i--){
        int cur = (n >> i) & 1;
        string temp = to_string(cur);

        if (temp != "0")
            answer += temp;
        else {
            answer += "0";
        }
    }

    return answer;
}
*/