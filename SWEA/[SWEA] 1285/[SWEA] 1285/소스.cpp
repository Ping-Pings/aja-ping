#include<iostream>
#include<vector>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		cin >> N;
		vector<int> v(N);					// N���� ����� ������ ���� ������ ���� �Ÿ� ���� ����
		int min_n = 100000;					// �ּ� ���� �Ÿ�
		int cnt = 0;						// 0�� ���� ����� �Ÿ� ���� ��� �� ī��Ʈ

		for (int i = 0; i < N; i++)
		{
			int abs_n = 100000;				// ������ ���� �Ÿ� �ʱ�ȭ.
			cin >> abs_n;
			v[i] = abs(abs_n);
			min_n = min(min_n, v[i]);


		}

		for (int i = 0; i < N; i++)			// �ּڰ� ���� ����� ������ �Ÿ��� ������ ��� ī����
		{
			if (min_n == v[i]) cnt++;
		}

		cout << "#" << test_case << " " << min_n << " " << cnt << "\n";
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}