#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	//  각 월의 일수를 누적하여 저장
	int day_in_month[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int m1, d1, m2, d2;
		cin >> m1 >> d1 >> m2 >> d2;
		
		int start_day = day_in_month[m1 - 1] + d1;		// 직전달까지의 누적 + 이번 달의 day수
		int end_day = day_in_month[m2 - 1] + d2;		// 위와 동일하게 두 번째 날짜 누적 일수로 변환

		// 두 날짜 간의 차이 계산 및 출력
		int result = end_day - start_day + 1;
		cout << "#" << test_case << " " << result << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}