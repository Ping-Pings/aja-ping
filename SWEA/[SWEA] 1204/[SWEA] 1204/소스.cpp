#include<iostream>
#include<vector>
using namespace std;


/*
	1000명의 학생 수학 성적
	최빈수를 통해 평균 짐작, 가장 여러 번 나오는 값을 구하는 것. 최빈수가 여러 개일 경우에는 가장 큰 점수 출력.
	1000개의 수, 0 ~ 100 이하의 값.

	1. 학생들의 값 1000개 ARRAY로 받고
	2. 해당 값의 인덱스에 카운팅 해주기.
	3. ARRAY를 돌면서, 가장 값이 MAX인 것 출력. 만약 MAX인 값이 여러 개면 인덱스가 뒤에 있는 걸 출력(뒤에서부터 돌면 될 듯.)
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
		vector<int> frequency(101, 0);		// 점수의 빈도수를 저장하는 배열

		// 학생 점수 입력 및 빈도 계산
		for (int i = 0; i < 1000; i++)
		{
			int score;
			cin >> score;
			frequency[score]++;
		}

		// 최빈값 찾기 : 가장 큰 점수를 우선하는 방식
		int mode = 0;								// 가장 많이 등장한 점수
		for (int i = 100; i >= 0; --i)				// 뒤에서부터 탐색하여, 빈도가 같을 경우 더 큰 점수가 mode에 저장되게 함.
		{
			if (frequency[i] > frequency[mode]){
				mode = i;
			}
		}

		// 출력
		cout << "#" << test_cnt << " " << mode << "\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}