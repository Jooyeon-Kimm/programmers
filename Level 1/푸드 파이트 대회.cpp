
#include <string>
#include <vector>

using namespace std;

// 왼쪽 문자열을 추가하면서, 오른쪽 문자열도 추가한다
string solution(vector<int> food) {
	string answer = "";

	string left_str = "";
	string right_str = "";

	for (int i = 1; i < food.size(); i++) {
		for (int k = 0; k < food[i] / 2; k++) {
			left_str = left_str + to_string(i); // 뒤에 붙여주기
			right_str = to_string(i) + right_str;   // 앞에 붙여주기
		}
	}
	answer = left_str + "0" + right_str;
	return answer;
}