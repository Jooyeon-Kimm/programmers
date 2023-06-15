#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int N;

// 오름차순
bool compare(string a, string b) {
    if (a[N] == b[N]) {
        return a < b;
    }
    else {
        return a[N] < b[N];
    }
}


vector<string> solution(vector<string> strings, int n) {

    N = n;
    sort(strings.begin(), strings.end(), compare);

    return strings;
}

// 비교 함수 cmp를 만들어, 
// n번째 글자 기준으로 맞게 정렬되었으면 true
// 역순이면 false를 리턴해준다.

// sort 함수로 strings를 정렬할 때,
// cmp 리턴값이 false이면 비교 대상 두 값의 자리를 바꾸고, 
// true이면 바꾸지 않게 동작한다.