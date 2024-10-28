#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
/*
10�� �� �Է� �޾� �ִ� ���� �ּ� ���� ������ ������ ��հ� ��� (�Ҽ��� ù° �ڸ����� �ݿø��� ���� ���)
1. �Է� �޾Ƽ� ���Ϳ� �ְ�, �����鼭 �ִ�, �ּ� ����(MIN, MAX)
2. �׸��� �ش� ���� ���Ϳ��� ����.
3. �ٸ� ������ ��� ���ϰ� �ش� ����� round���ְų� fixed, precision���ֱ�
������ ��, max���� min���� ���� ���� ���, ī��Ʈ �ִ� ��.

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

		// �ִ񰪰� �ּڰ��� ���� ���
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
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}