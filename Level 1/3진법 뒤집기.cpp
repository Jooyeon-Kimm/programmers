#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;

    vector<int> three;
    int tmp;
    while (n > 0) {
        tmp = n % 3;
        n = n / 3;

        three.push_back(tmp);
    }

    for (int i = 0; i < three.size(); i++) {
        // cout << three[i] << " " << three[i] * pow(3, (three.size() - i - 1 )) << endl;
        answer += three[i] * pow(3, (three.size() - i - 1));
    }
    return answer;
}