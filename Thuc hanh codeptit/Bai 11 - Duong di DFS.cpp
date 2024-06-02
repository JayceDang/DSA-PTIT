#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool vis[1001];
int par1[1001], par2[1001];
vector<int> adj[1001];
int n, m;

void input() {
	for (int i = 0; i < 1001; ++i) {
		adj[i].clear();
	}
	cin >> n >> m;
	for (int i = 1; i <= m; ++i) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void Dfs(int u) {
	vis[u] = true;
	for(int v : adj[u]){
		if(!vis[v]){
			par1[v]=u;
			Dfs(v);
		}
	}
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
				par2[x] = v;
			}
		}
	}
}

void Path_Dfs(int s, int t) {
	memset(vis, false, sizeof(vis));
	memset(par1, 0, sizeof(par1));
	Dfs(s);
	
	if (!vis[t]) {
		cout << "-1\n";
	}
	else {
		vector<int> path;
		while (t != s) {
			path.push_back(t);
			t = par1[t];
		}
		path.push_back(s);
		reverse(path.begin(), path.end());
		for (int x : path) {
			cout << x << " ";
		}
		cout << "\n";
	}
}

void Path_Bfs(int s, int t) {
	memset(vis, false, sizeof(vis));
	memset(par2, 0, sizeof(par2));
	Bfs(s);
	
	if (!vis[t]) {
		cout << "-1\n";
	}
	else {
		vector<int> rev;
		rev.push_back(t);
		int u = par2[t];
		while (u != s) {
			rev.push_back(u);
			u = par2[u];
		}
		rev.push_back(s);
		for (int i = rev.size()-1; i >= 0; i--) {
			cout << rev[i] << " ";
		}
		cout << "\n";
	}
}

int main() {
	int T = 1;
	while (T--) {
		input();
		Dfs(1);
		for (int i = 2; i <= n; ++i) {
			if (vis[i]) {
				Path_Dfs(1, i);
				Path_Bfs(i, 1);
			}
			else {
				cout << "-1\n";
				cout << "-1\n";
			}
		}
	}

	return (0^_^0);
}
