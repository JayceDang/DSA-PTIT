#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m, cnt;
vector<int> adj[1001];
bool visited[1001];

void input() {
	for (int i = 0; i < 1001; ++i) {
		adj[i].clear();
	}
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
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
		for (int x : adj[v]) {
			if (!visited[x]) {
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

void connected() {
    cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            ++cnt;
            BFS_vohuong(i);
        }
    }
}

int main() {
	int T; cin >> T;
	while (T--) {
		input();
		connected();
		cout << cnt << "\n";		
	}

	return (0^_^0);
}
