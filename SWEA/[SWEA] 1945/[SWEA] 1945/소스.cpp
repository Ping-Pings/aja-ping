#include<iostream>

using namespace std;

int cnt;
int n_divide(long long N, int k) {
	cnt = 0;
	if (N % k != 0) {
		return 0;
	}
	else {
		int result = N;
		while (result % k == 0) {
			result = result / k;
			cnt++;
		}
		return cnt;
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{

		long long N;
		cin >> N;
		cout << "#" << test_case << " ";
		for (int k : {2, 3, 5, 7, 11}) {
			cout << n_divide(N, k) << " ";
		}
		cout << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}