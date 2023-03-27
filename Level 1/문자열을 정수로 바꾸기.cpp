#include <string>       
// stoll : string to long long
// to_string : long long to string

#include <functional>   // greater
#include <algorithm>    // sort
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    string str = to_string(n);
    sort(str.begin(), str.end(), greater<char>()); // 오름차순 greater
    answer = stoll(str);

    return answer;
}

int main(void) {
    int result = solution(19253);
    cout << result;
    return 0;
}