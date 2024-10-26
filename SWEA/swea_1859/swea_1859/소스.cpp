#include<iostream>
#include<vector>

using namespace std;

// 한 번에 많은 양을 사재기할 순 없음.
/*
1. 연속된 N일 동안의 물건의 매매가를 예측하여 앎.
2. 당국의 감시망에 걸리지 않기 위해 하루에 최대 1만큼 구입.
3. 판매는 얼마든지 할 수 있음.
*/
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
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
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}