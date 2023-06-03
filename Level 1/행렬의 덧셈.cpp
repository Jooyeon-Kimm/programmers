#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> inside;

    for (int i = 0; i < arr1.size(); i++) {
        for (int k = 0; k < arr1[i].size(); k++) {
            inside.push_back(arr1[i][k] + arr2[i][k]);
        }
        answer.push_back(inside);
        inside.clear();
    }
    return answer;
}