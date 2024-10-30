#include <iostream>
#include <vector>

using namespace std;

/*
	1. 먼저 컴퓨터 수 N을 받고
	2. 연걸된 컴퓨터 쌍의 수 M을 받는다.
	3. FOR문으로 M개의 컴퓨터 번호쌍을 입력받는다.
	 - 그 번호쌍을 vector 안에 저장해준다.
	4. dfs로 노드들 방문하면서 영향 주는 컴퓨터 수를 counting
*/

vector<vector<int> > network;		// 비선형 구조로 연결된 컴퓨터 network
vector<bool> visited;				// 방문 처리
int cnt = 0;

void dfs(int v) {
	visited[v] = true;				// 시작 노드 방문 처리
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
	int N, M;						// 컴퓨터 수, 연결된 컴퓨터 쌍의 수

	cin >> N;			
	cin >> M;
	network.resize(N + 1);
	visited.resize(N + 1, false);
	int root = 1;					// 처음 시작 노드는 1로 지정. 고정.

	// 컴퓨터 쌍의 수만큼 연결리스트 내에 넣어준다.
	for (int i = 1; i < M+1; i++)
	{
		int s = 0, e = 0;
		cin >> s >> e;
		network[s].push_back(e);				// 연결 쌍 만들어줌
		network[e].push_back(s);
	}

	

	// DFS 출력 - 카운트 출력.
	dfs(root);
	cout << cnt - 1 << "\n";

	return 0;
}
