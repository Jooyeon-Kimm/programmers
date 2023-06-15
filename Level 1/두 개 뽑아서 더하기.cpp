#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int nsize = numbers.size();

    for (int i = 0; i < nsize; i++) {
        for (int k = i + 1; k < nsize; k++) {
            answer.push_back(numbers[i] + numbers[k]);
        }
    }

    // 정렬 후, unique()를 통해 중복값을 맨 뒤에 보낸다. (쓰레기값)
    // erase()로 쓰레기값을 제거한다.
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());

    return answer;
}