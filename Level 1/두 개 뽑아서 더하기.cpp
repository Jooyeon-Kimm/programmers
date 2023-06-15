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

    // ���� ��, unique()�� ���� �ߺ����� �� �ڿ� ������. (�����Ⱚ)
    // erase()�� �����Ⱚ�� �����Ѵ�.
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());

    return answer;
}