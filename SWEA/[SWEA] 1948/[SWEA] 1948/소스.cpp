#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	//  �� ���� �ϼ��� �����Ͽ� ����
	int day_in_month[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int m1, d1, m2, d2;
		cin >> m1 >> d1 >> m2 >> d2;
		
		int start_day = day_in_month[m1 - 1] + d1;		// �����ޱ����� ���� + �̹� ���� day��
		int end_day = day_in_month[m2 - 1] + d2;		// ���� �����ϰ� �� ��° ��¥ ���� �ϼ��� ��ȯ

		// �� ��¥ ���� ���� ��� �� ���
		int result = end_day - start_day + 1;
		cout << "#" << test_case << " " << result << "\n";

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}