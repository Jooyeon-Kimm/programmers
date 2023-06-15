#include <string>
#include <vector>

using namespace std;

// 윤달: 2월 29일
string solution(int a, int b) {
    // 2016년 1월 1일이 금요일이므로, day의 1번째는 FRI
    vector<int> month = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    vector<string> day = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };

    int sum = b;

    for (int i = 0; i < a - 1; i++) {
        sum += month[i];
    }

    return day[sum % 7];
}