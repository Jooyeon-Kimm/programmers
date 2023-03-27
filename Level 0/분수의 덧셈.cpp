#include <string>
#include <vector>

using namespace std;

// 최대공약수
int gcd(int a, int b) {
    int mod = a % b;

    while (mod > 0) {
        a = b;
        b = mod;
        mod = a % b;
    }
    return b;
}

// 분자/분모 return
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int top = numer1 * denom2 + numer2 * denom1;
    int bottom = denom1 * denom2;

    // 분모, 분자의 최대공약수
    int gcdN = gcd(top, bottom);

    // 약분
    top /= gcdN;
    bottom /= gcdN;

    // 분자, 분모 순으로 벡터에 넣기
    answer.push_back(top);
    answer.push_back(bottom);


    return answer;
}