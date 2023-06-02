#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    int saveNum = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != saveNum) {
            saveNum = arr[i];
            answer.push_back(arr[i]);
        }

    }

    return answer;
}

/*
vector<int> solution(vector<int> arr) {
    sort(arr.begin(), arr.end()); // sort를 진행하고
    arr.erase(unique(arr.begin(), arr.end()), arr.end()); // unique(): 중복제거, erase(): 더미값 제거
    vector<int> answer = arr;

    return answer;
}
*/