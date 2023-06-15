
#include <string>
#include <vector>

using namespace std;

// ���� ���ڿ��� �߰��ϸ鼭, ������ ���ڿ��� �߰��Ѵ�
string solution(vector<int> food) {
	string answer = "";

	string left_str = "";
	string right_str = "";

	for (int i = 1; i < food.size(); i++) {
		for (int k = 0; k < food[i] / 2; k++) {
			left_str = left_str + to_string(i); // �ڿ� �ٿ��ֱ�
			right_str = to_string(i) + right_str;   // �տ� �ٿ��ֱ�
		}
	}
	answer = left_str + "0" + right_str;
	return answer;
}