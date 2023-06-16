// ������ ǯ
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// int�� n�� ������ȯ�Ͽ� string���� ��ȯ�ϴ� �Լ�
string toTwo(int n) {
    string res = "";
    while (n > 0) {
        res = to_string(n % 2) + res;
        n = n / 2;
    }
    return res;
}

vector<int> solution(string s) {
    vector<int> answer;
    int removedZero = 0;    // ���ŵ� 0�� ����
    int convertCnt = 0;     // ��ȯ�� Ƚ��

    while (1) {
        int one = 0;    // 1�� ����
        int zero = 0;   // 0�� ����

        // 0�� 1�� ���� ����
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') zero++;
            if (s[i] == '1') one++;
        }

        // s ����, 1�� ����(���ڿ��� ����)�� ������ȯ�ϱ�
        s.clear();
        s = toTwo(one);

        // ������ 0�� ������ ��ȯ Ƚ�� ����
        removedZero += zero;
        convertCnt++;

        cout << s << endl;

        // ���ڿ��� 1�� �Ǹ� ���߱�
        if (s == "1") break;
    }

    answer.push_back(convertCnt);
    answer.push_back(removedZero);

    return answer;
}

int main(void) {
    string s = "110010101001";
    solution(s);
}