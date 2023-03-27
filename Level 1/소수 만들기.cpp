#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool sosu(int n) {
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) cnt++;
    }
    if (cnt > 0)
        return true;
    else return false;
}

int main(void) {
    bool result = sosu(6);
    cout << result;
}