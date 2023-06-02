#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main(void) {
    int n = 3;
    vector<int> three;
    int answer = 1;

    while(three.size() < n) {
        if (answer % 3 == 0)
            continue;
        else {
            three.push_back(answer);
        }
        answer++;
    }

    for (int i = 0; i < three.size(); i++)
        cout << three[i] << " ";
	return 0;
}
