#include<iostream>
#include<vector>

using namespace std;

// �� ���� ���� ���� ������� �� ����.
/*
1. ���ӵ� N�� ������ ������ �ŸŰ��� �����Ͽ� ��.
2. �籹�� ���ø��� �ɸ��� �ʱ� ���� �Ϸ翡 �ִ� 1��ŭ ����.
3. �ǸŴ� �󸶵��� �� �� ����.
*/
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		long long N;
		cin >> N;

		vector <int> v(N);
		for (long long i = 0; i < N; i++)
		{
			cin >> v[i];
		}

		long long sum = 0;
		int max_price = 0;
		
		for (long long i = N - 1; i >= 0; --i)
		{
			if (v[i] > max_price) {
				max_price = v[i];
			}
			else {
				sum += max_price - v[i];
			}
		}

		cout << "#" << test_case << " " << sum << "\n";
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}