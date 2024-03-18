#include <bits/stdc++.h>
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

void DFS_vohuong(int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) 
            DFS_vohuong(v);      
    }
}

void connected() {
    cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            ++cnt;
            DFS_vohuong(i);
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
    return 0;
}
