#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m, cnt;
bool vis[1005];
vector<int> adj[1005];
vector<pair<int, int>> v, ans;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
    	return a.second < b.second;
	}
	return a.first < b.first;
}

void input() {
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int x, y; cin >> x >> y;
		v.push_back({x, y});
	}
	memset(vis, false, sizeof vis);
}

void bfs(int u) {
	queue<int> q;
	q.push(u);
	vis[u] = true;
	while (!q.empty()) {
		int v = q.front(); q.pop();
		for (int x : adj[v]) {
			if (!vis[x]) {
				q.push(x);
				vis[x] = true;
			}
		}
	}
}

int connected() {
	cnt = 0;
	for (int i = 1; i <= n; ++i) {
		if (!vis[i]) {
			++cnt;
			bfs(i);
		}
	}
	return cnt;
}

int main() {
	int T; cin >> T;
	while (T--) {
		input();
		int tmp = 0;
		while (tmp != v.size()) {
			memset(vis, false, sizeof vis);
			for (int i = 0; i < 1005; ++i)
				adj[i].clear();
			int dx = 0, dy = 0;
			for (int i = 0; i < v.size(); ++i) {
				int x = v[i].first;
				int y = v[i].second;
				if (tmp != i) {
					adj[x].push_back(y);
					adj[y].push_back(x);				
				}
				else {
					dx = x;
					dy = y;
				}
			}
			connected();
			if (cnt > 1) {
				ans.push_back({dx, dy});
			}
			++tmp;
		}
		sort(ans.begin(), ans.end(), cmp);
		for (auto x : ans)
			cout << x.first << " " << x.second << " ";
		cout << "\n";	
	}

	return (0^_^0);
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/
