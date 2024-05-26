#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool vis[1001];
vector<int> adj[1001];
int par[1001];
int n, m;

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
}

bool Dfs(int u) {
	vis[u] = true;
	for (int x : adj[u]) {
		if (!vis[x]) {
			par[x] = u;
			if (Dfs(x)) {
				return true;
			}
		}
		else if (x != par[u]) {
			return true;
		}
	}
	return false;
}

bool check(int n) {
	memset(vis, false, sizeof vis);
	memset(par, -1, sizeof par);
	for (int i = 1; i <= n; ++i) {
		if (!vis[i] && Dfs(n)) {
			return true;
		}
	}
	return false;
}

int main() {
	int T; cin >> T;
	while (T--) {
		input();
		if (check(n)) {
			cout << "YES\n";
		}	
		else {
			cout << "NO\n";
		}
	}

	return (0^_^0);
}

