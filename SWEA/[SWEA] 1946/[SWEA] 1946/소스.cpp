#include<iostream>
#include<vector>
using namespace std;

/*
너비 10인 여러 줄의 문자열을 입력받고
해당 문자열은 마짐가 줄은 제외하고 다 빈 공간 없이 알파벳으로 채워져 있고 마지막 줄은 왼쪽부터 채워져 있음.
해당 문서를 압축한 문서는 알파벳과 그 알파벳의 연속된 개수로 이루어진 쌍들이 나열되어 있음. (EX. A5 AAAAA)
압축된 문서를 입력 받아 원본 문서 만들어라.

- 알파벳과 숫자 쌍의 개수 N은 1이상 10 이하 정수
- 주어지는 알파벳은 A ~ Z의 대문자.
- 알파벳의 연속된 개수로 주어지는 수K는 1 이상 20 이하의 정수
- 원본 문서의 너비는 10 고정


1. 숫자 알파벳 쌍의 개수n 입력 받고
2. n개의 알파벳(c), 알파벳 개수(k) 입력 받고 for문
3. 출력이 포인트일 것 같음. 출력할 땐, 너비 10 이하로 출력하도록 함.
*/
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		cin >> N;
		string str = "";
		for (int i = 0; i < N; i++)
		{
			char C; int k;
			cin >> C >> k;
			str.append(k, C);
		}

		cout << "#" << test_case << "\n";
		for (int i = 0; i < str.length(); i+=10)
		{
			cout << str.substr(i, 10) << "\n";
		}
		
		


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}