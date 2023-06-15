#include <string>
#include <vector>

using namespace std;

// ����: 2�� 29��
string solution(int a, int b) {
    // 2016�� 1�� 1���� �ݿ����̹Ƿ�, day�� 1��°�� FRI
    vector<int> month = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    vector<string> day = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };

    int sum = b;

    for (int i = 0; i < a - 1; i++) {
        sum += month[i];
    }

    return day[sum % 7];
}