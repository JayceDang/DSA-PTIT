#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool vis[1001];
int par[1001];
vector<int> adj[1001];
int n, m, s, t;

void input() {
	for (int i = 0; i < 1001; ++i) {
		adj[i].clear();
	}
	cin >> n >> m >> s >> t;
	for (int i = 1; i <= m; ++i) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
	}
	memset(vis, false, sizeof vis);
}

void Bfs(int u) {
	queue<int> q;
	q.push(u); vis[u] = true;
	while (!q.empty()) {
		int v = q.front(); q.pop();
		for (int x : adj[v]) {
			if (!vis[x]) {
				vis[x] = true;
				q.push(x);
				par[x] = v;
			}
		}
	}
}

void Path(int s, int t) {
	memset(vis, false, sizeof(vis));
	memset(par, 0, sizeof(par));
	Bfs(s);
	
	if (!vis[t]) {
		cout << "-1\n";
	}
	else {
		vector<int> rev;
		rev.push_back(t);
		int u = par[t];
		while (u != s) {
			rev.push_back(u);
			u = par[u];
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

