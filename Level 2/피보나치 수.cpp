// Dynamic Programming and Memoization Vector
#include <string>
#include <vector>

using namespace std;

vector<long long> dp(1000001);

long long fibo(int n) {
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {    // 2부터 시작해서 n까지 반복
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1234567;
    }
    return dp[n];
}


int solution(int n) {
    int answer = 0;
    answer = fibo(n);
    return answer;
}
