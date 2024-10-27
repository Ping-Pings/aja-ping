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
		vector<int> v(N);					// N명의 사람이 던지는 돌의 각각의 절댓값 거리 넣을 벡터
		int min_n = 100000;					// 최소 절댓값 거리
		int cnt = 0;						// 0과 가장 가까운 거리 던진 사람 수 카운트

		for (int i = 0; i < N; i++)
		{
			int abs_n = 100000;				// 각각의 절댓값 거리 초기화.
			cin >> abs_n;
			v[i] = abs(abs_n);
			min_n = min(min_n, v[i]);


		}

		for (int i = 0; i < N; i++)			// 최솟값 가진 사람과 동일한 거리를 던졌을 경우 카운팅
		{
			if (min_n == v[i]) cnt++;
		}

		cout << "#" << test_case << " " << min_n << " " << cnt << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}