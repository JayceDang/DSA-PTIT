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
    }
    memset(visited, false, sizeof(visited));
}

void DFS_cohuong(int u) {
	visited[u] = true;
	for (int v : adj[u]) {
		if (!visited[v]) {
			parent[v] = u;
			DFS_cohuong(v);
		}
	}
}

void Path(int s, int t) {
	memset(visited, false, sizeof(visited));
	memset(parent, 0, sizeof(parent));
	DFS_cohuong(s);
	
	if (!visited[t]) {
		cout << "-1\n";
	}
	else {
		//Truy vet
		vector<int> path;
		//start in t
		while (t != s) {
			path.push_back(t);
			t = parent[t];
		}
		path.push_back(s);
		reverse(path.begin(), path.end());
		for (int x : path) {
			cout << x << " ";
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
