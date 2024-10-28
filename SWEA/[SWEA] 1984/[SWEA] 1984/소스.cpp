#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
/*
10개 수 입력 받아 최대 수와 최소 수를 제외한 나머지 평균값 출력 (소수점 첫째 자리에서 반올림한 정수 출력)
1. 입력 받아서 벡터에 넣고, 넣으면서 최대, 최소 구분(MIN, MAX)
2. 그리고 해당 수는 벡터에서 제거.
3. 다른 수들의 평균 구하고 해당 평균을 round해주거나 fixed, precision해주기
주의할 건, max값과 min값이 여러 개일 경우, 카운트 주는 거.

*/
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		vector<int> v(10, 0);
		int sum = 0, max_num = -1, min_num = 101;
		int max_cnt = 0, min_cnt = 0;
		for (int i = 0; i < 10; i++)
		{
			cin >> v[i];
			sum += v[i];
			max_num = max(max_num, v[i]);
			min_num = min(min_num, v[i]);
		}

		// 최댓값과 최솟값의 개수 계산
		for (int i = 0; i < 10; i++)
		{
			if (max_num == v[i])
			{
				max_cnt++;
			}
			if (min_num == v[i])
			{
				min_cnt++;
			}
		}
		sum = sum - (max_num * max_cnt) - (min_num * min_cnt);
		double result = sum /  (10.0 - max_cnt - min_cnt);
		cout << "#" << test_case << " " << round(result) << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}