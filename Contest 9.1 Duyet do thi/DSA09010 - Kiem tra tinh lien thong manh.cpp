#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m, cnt;
vector<int> adj[1001];
bool vis[1001];
vector<int> tmp;
vector<vector<int>> ans;

bool cmp(vector<int>& a, vector<int>& b) {
	return a.size() > b.size();
}

void input() {
	for (int i = 0; i < 1001; ++i) {
		adj[i].clear();
	}
	cin >> n >> m;
	for (int i = 1; i <= m; ++i) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
}

void Bfs(int u) {
	queue<int> q;
	q.push(u);
	vis[u] = true;
	while (!q.empty()) {	
		int v = q.front();
		tmp.push_back(v);
		q.pop();
		for (int x : adj[v]) {
			if (!vis[x]) {
				q.push(x);
				vis[x] = true;
			}
		}
	}
	ans.push_back(tmp);
	tmp.clear();
}

void connected() {
    for (int i = 1; i <= n; ++i) {
    	memset(vis, false, sizeof(vis));
       	if (!vis[i]) {
       		Bfs(i);
		}
    }
}

int main() {
	int T; cin >> T;
	while (T--) {
		input();
		connected();
		sort(ans.begin(), ans.end(), cmp);
		int dem = 0;
		int jayce = 0;
		bool check[1001] = {false};
		for (int i = 0; i < ans.size(); ++i) {
			bool ok = false;
			for (int j = 0; j < ans[i].size(); ++j) {
				if (!check[ans[i][j]]) {
					check[ans[i][j]] = true;
					++dem;
				}
				if (dem == n) {
					jayce = i+1; ok = true; break;
				}	
			}
			if (ok) break;
		}
		ans.clear();
		if (jayce == 1)
			cout << "YES\n";
		else {
			cout << "NO\n";
		}
	}	
	
	return (0^_^0);
}
