#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    // sort 함수를 이용해 A는 내림차순, B는 오름차순으로 정렬한다.
    sort(A.begin(), A.end(), greater<>());
    sort(B.begin(), B.end(), less<>());

    for (int i = 0; i < A.size(); i++) {
        answer += A[i] * B[i];
    }
    return answer;
}