#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int A, B, N;
		cin >> A >> B >> N;

		int cnt = 0;
		while (max(A, B) <= N) {		// max�� ���ǿ� �־��ִ� �� ����Ʈ~!
			if (A > B)
			{
				B += A;cnt++;
			}
			else {
				A += B;cnt++;
			}
		}

		cout << cnt << "\n";
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}