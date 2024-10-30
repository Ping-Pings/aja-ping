#include <iostream>
#include <vector>

using namespace std;

/*
	1. ���� ��ǻ�� �� N�� �ް�
	2. ���ɵ� ��ǻ�� ���� �� M�� �޴´�.
	3. FOR������ M���� ��ǻ�� ��ȣ���� �Է¹޴´�.
	 - �� ��ȣ���� vector �ȿ� �������ش�.
	4. dfs�� ���� �湮�ϸ鼭 ���� �ִ� ��ǻ�� ���� counting
*/

vector<vector<int> > network;		// ���� ������ ����� ��ǻ�� network
vector<bool> visited;				// �湮 ó��
int cnt = 0;

void dfs(int v) {
	visited[v] = true;				// ���� ��� �湮 ó��
	cnt++;

	for (int i = 0; i < network[v].size(); i++)
	{
		int next = network[v][i];
		if (!visited[next])
		{
			dfs(next);
		}
	}
}

int main() {
	int N, M;						// ��ǻ�� ��, ����� ��ǻ�� ���� ��

	cin >> N;			
	cin >> M;
	network.resize(N + 1);
	visited.resize(N + 1, false);
	int root = 1;					// ó�� ���� ���� 1�� ����. ����.

	// ��ǻ�� ���� ����ŭ ���Ḯ��Ʈ ���� �־��ش�.
	for (int i = 1; i < M+1; i++)
	{
		int s = 0, e = 0;
		cin >> s >> e;
		network[s].push_back(e);				// ���� �� �������
		network[e].push_back(s);
	}

	

	// DFS ��� - ī��Ʈ ���.
	dfs(root);
	cout << cnt - 1 << "\n";

	return 0;
}
