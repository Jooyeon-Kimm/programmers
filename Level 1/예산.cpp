// Visual Studio 사용할 필요 없었을 정도로
// 쉽게 풀렸다.
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int sum = 0;

    sort(d.begin(), d.end());
    for (int i = 0; i < d.size(); i++) {
        if (sum + d[i] > budget) break;

        sum += d[i];
        answer++;
    }
    return answer;
}