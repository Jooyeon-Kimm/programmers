#include <string>
#include <vector>
#include <cmath> // pow(), sqrt() 

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    if (sqrt(n) == (int)sqrt(n)) {
        answer = pow(sqrt(n) + 1, 2);
    }
    else {
        answer = -1;
    }
    return answer;
}