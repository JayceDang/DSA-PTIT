#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m;
vector<int> adj[100001];
bool vis[100001];
vector<int> ans;
int dem = 0;

void Bfs(int u) {
	if (vis[u]) return;
	queue<int> q;
	q.push(u);
	vis[u] = true;
	
	while (!q.empty()) {
		int v = q.front(); q.pop();
		++dem;
		for (int x : adj[v]) {
			if (!vis[x]) {
				q.push(x);
				vis[x] = true;
			}
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < 100001; ++i) {
		adj[i].clear();
	}

	for (int i = 0; i < m; ++i) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(vis, false, sizeof vis);
	
	for (int i = 1; i <= n; ++i) {
		dem = 0;
		Bfs(i);
		ans.push_back(dem);
	}
	sort(ans.begin(), ans.end(), greater<int>());
	cout << ans[0] + ans[1] << "\n";

	return (0^_^0);
}
