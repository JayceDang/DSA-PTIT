#include <bits/stdc++.h>
#define _ 0
using namespace std;

const long long INF = 1e9;
const int mxN = 10007;
int n, m, u;
vector<pair<int, int>> adj[mxN];

//* d[v] = min(d[u], len(u,v)
void input() {
	for (int i = 0; i < 10007; ++i) {
		adj[i].clear();
	}
	cin >> n >> m >> u;
	for (int i = 1; i <= m; ++i) {
		int x, y, w; cin >> x >> y >> w;
		adj[x].push_back({y, w});
		adj[y].push_back({x, w});
	}
}

void dijkstra(int s) {
	vector<long long> d(n+1, 1e9);
	d[s] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
	Q.push({0, s});
	while (!Q.empty()) {
		pair<int, int> top = Q.top(); Q.pop();
		int u = top.second;
		int kc = top.first;
		if (kc > d[u]) continue;
		for (auto it : adj[u]) {
			int v = it.first;
			int w = it.second;
			if (d[v] > d[u]+w) {
				d[v] = d[u] + w;
				Q.push({d[v], v});
			}
		}
	}
	for (int i = 1; i <= n; ++i) {
		cout << d[i] << " ";
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		input();
		dijkstra(u);
		cout << "\n";	
	}

	return (0^_^0);
}
