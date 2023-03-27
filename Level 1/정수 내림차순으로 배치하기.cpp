#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int jarisu(long long n) {
    int cnt = 0;
    while (n > 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

long long solution(long long n) {
    long long answer = 0;
    vector<int> a;

    while (n > 0) {
        a.push_back(n % 10);
        n /= 10;
    }

    sort(a.begin(), a.end());

    for (int i = a.size() - 1; i >= 0; i--) {
        // cout << a[i] * pow(10, i) << endl;
        answer += a[i] * pow(10, i);
    }
    return answer;
}