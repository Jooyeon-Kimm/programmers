#include <string>
#include <iostream>

using namespace std;

int main(void) {
    int x = 18;
    int jarisu_sum = 0;
    while (x > 0) {
        jarisu_sum += (x % 10);
        x /= 10;
    }
    if (jarisu_sum % x != 0)
        cout << "false";
    else cout << "true";
}