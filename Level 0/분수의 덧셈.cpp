#include <string>
#include <vector>

using namespace std;

// �ִ�����
int gcd(int a, int b) {
    int mod = a % b;

    while (mod > 0) {
        a = b;
        b = mod;
        mod = a % b;
    }
    return b;
}

// ����/�и� return
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int top = numer1 * denom2 + numer2 * denom1;
    int bottom = denom1 * denom2;

    // �и�, ������ �ִ�����
    int gcdN = gcd(top, bottom);

    // ���
    top /= gcdN;
    bottom /= gcdN;

    // ����, �и� ������ ���Ϳ� �ֱ�
    answer.push_back(top);
    answer.push_back(bottom);


    return answer;
}