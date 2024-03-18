#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m, s, t;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

void input() {
	for (int i = 0; i < 1001; ++i) {
		adj[i].clear();
	}
	cin >> n >> m >> s >> t;
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
		int v = q.front(); q.pop();
		for (int x : adj[v]) {
			if (!visited[x]) {
				q.push(x);
				visited[x] = true;
				parent[x] = v;
			}
		}
	}
}

void Path(int s, int t) {
	memset(visited, false, sizeof(visited));
	memset(parent, 0, sizeof(parent));
	BFS_vohuong(s);
	
	if (!visited[t]) {
		cout << "-1\n";
	}
	else {
		vector<int> rev;
		rev.push_back(t);
		int u = parent[t];
		while (u != s) {
			rev.push_back(u);
			u = parent[u];
		}
		rev.push_back(s);
		for (int i = rev.size()-1; i >= 0; i--) {
			cout << rev[i] << " ";
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		input();
		Path(s, t);
		cout << "\n";		
	}

	return (0^_^0);
}
