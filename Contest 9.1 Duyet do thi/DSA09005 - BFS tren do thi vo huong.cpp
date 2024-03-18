#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m, u;
vector<int> adj[1001];
bool visited[1001];

void input() {
	for (int i = 0; i < 1001; ++i) {
		adj[i].clear();
	}
	cin >> n >> m >> u;
	for (int i = 1; i <= m; ++i) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}

void BFS_vohuong(int u) {
	queue<int> q;
	q.push(u);
	visited[u] = true;
	
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		cout << v << " ";
		for (int x : adj[v]) {
			if (!visited[x]) {
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		input();
		BFS_vohuong(u);
		cout << "\n";	
	}

	return (0^_^0);
}
