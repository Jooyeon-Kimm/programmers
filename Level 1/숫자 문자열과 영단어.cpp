#include <string>
#include <vector>
#include <cmath> // pow(), sqrt() 
#include <algorithm> // max_element
#include <iostream>
using namespace std;

void solution(vector<vector<int>> sizes) {
    int answer = 0;

    int tmp;
    int maxGaro = 0;
    int maxSero = 0;
    for (int i = 0; i < sizes.size(); i++) {

        // 가로가 무조건 세로보다 길도록
        if (sizes[i][0] < sizes[i][1]) {
            tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }

        if (sizes[i][0] > maxGaro) {
            maxGaro = sizes[i][0];
        }

        if (sizes[i][1] > maxSero) {
            maxSero = sizes[i][1];
        }
    }
    cout << "maxGaro : " << maxGaro << endl;
    cout << "maxSero : " << maxSero << endl;


}

int main(void) {
    vector<vector<int>> sizes = { {60, 50}, { 30, 70 }, { 60, 30 }, { 80, 40 }};
    solution(sizes);


}