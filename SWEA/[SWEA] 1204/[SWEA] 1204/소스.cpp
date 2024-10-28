#include<iostream>
#include<vector>
using namespace std;


/*
	1000���� �л� ���� ����
	�ֺ���� ���� ��� ����, ���� ���� �� ������ ���� ���ϴ� ��. �ֺ���� ���� ���� ��쿡�� ���� ū ���� ���.
	1000���� ��, 0 ~ 100 ������ ��.

	1. �л����� �� 1000�� ARRAY�� �ް�
	2. �ش� ���� �ε����� ī���� ���ֱ�.
	3. ARRAY�� ���鼭, ���� ���� MAX�� �� ���. ���� MAX�� ���� ���� ���� �ε����� �ڿ� �ִ� �� ���(�ڿ������� ���� �� ��.)
*/
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int test_cnt;
		cin >> test_cnt;
		vector<int> frequency(101, 0);		// ������ �󵵼��� �����ϴ� �迭

		// �л� ���� �Է� �� �� ���
		for (int i = 0; i < 1000; i++)
		{
			int score;
			cin >> score;
			frequency[score]++;
		}

		// �ֺ� ã�� : ���� ū ������ �켱�ϴ� ���
		int mode = 0;								// ���� ���� ������ ����
		for (int i = 100; i >= 0; --i)				// �ڿ������� Ž���Ͽ�, �󵵰� ���� ��� �� ū ������ mode�� ����ǰ� ��.
		{
			if (frequency[i] > frequency[mode]){
				mode = i;
			}
		}

		// ���
		cout << "#" << test_cnt << " " << mode << "\n";

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}