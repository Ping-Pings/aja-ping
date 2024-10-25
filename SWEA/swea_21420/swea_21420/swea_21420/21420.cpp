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
		while (max(A, B) <= N) {		// max는 조건에 넣어주는 게 포인트~!
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
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}