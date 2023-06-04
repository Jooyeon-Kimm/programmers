// �ٸ� ������� �����ٴµ�, ���� �������.
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; i++)
    {
        string tmp = "";
        
        // ��Ʈ OR �����ڸ� ����ϴ� ���� �ٽ��̴�.
        // ���⼭ ��Ʈ ������ ����� �� �𸣰�, 
        // 2���� ��ȯ �Լ��� �ۼ��Ϸ��� �ؼ� �������.
        arr1[i] = arr1[i] | arr2[i];

        // tmp�� ũ�Ⱑ n�� ������ ������
        while (tmp.size() != n)
        {
            // �������� ¦���̸� ����
            if (arr1[i] % 2 == 0)
                tmp.push_back(' ');

            // �������� Ȧ���̸� ��
            else
                tmp.push_back('#');

            // �� �缳��
            arr1[i] /= 2;
        }

        // �������ֱ�
        reverse(tmp.begin(), tmp.end());
        answer.push_back(tmp);
    }
    return answer;
}

/*
������ �ٽ��� OR ������ �̿��ϴ� ��


arr1�� arr2�� i��°�� �ִ� �� ���� 
or������ ���� arr1[i] ��°�� �ٽ� �����Ѵ�.

�̶� string�� tmp�� �����Ѵ�.
OR ������ ���� ���� ����� �������� ���� �ؼ��ؾ� �Ѵ�.

2�� �������� �� �������� 0�̸� ' '(����)�� tmp�� �־��ְ�,
�������� 1�̸� '#'�� tmp�� �־��ش�.

�̶�, tmp�� ������� n�̾�� �Ѵ�.

while���� ���� n��ŭ ���ڸ� �־��ְ�,
answer�� �ֱ� ���� reverse�� ���� 
tmp�� �������־���.

(tmp�� �Ųٷ� ���� ������ �ٷ���� ���� 
reverse() �Լ��� ����Ͽ���.)



�� �������� ���� Ʋ���� �κ��� 
�Ƹ� �ؼ��� ����� ���̿� n�� ���� �ʾƼ��� �� ����

n�� ���̸�ŭ ä������ �ϱ� ������ 
�� �κи� �����ϸ� ���� Ǯ �� ���� ���̴�
*/

int main(void) {

    vector<int> arr1 = { 9, 20, 28, 18, 11 };
    vector<int> arr2 = { 30, 1, 21, 17, 28 };
    int n = 5;

    cout << solution(n, arr1, arr2);

    return 0;
}


/*
�ð� �ʰ��� ���� �Լ�:
�������� ��ȯ�ϴ� �Լ�
int toTwo(int n, int m) { // n�� ����, m�� ��������� �� ���� ũ��
    int answer;
    int remainder; // ������

    // ���� 0���� Ŭ ������
    while (n / 2 >= 0) {
        remainder = n % 2;
        n = n / 2;
        answer = remainder * m;
        m--;
    }

    return answer;
}

string toTwo(int n, int m) { // n�� ����, m�� ��������� �� ���� ũ��
    string answer = "";

    for (int i = m-1; i >=0; i--){
        int cur = (n >> i) & 1;
        string temp = to_string(cur);

        if (temp != "0")
            answer += temp;
        else {
            answer += "0";
        }
    }

    return answer;
}
*/