#include <bits/stdc++.h>
using namespace std;

int n, m, u;
vector<int> adj[1001];
bool visited[1001];

void input() {
	//**
	for (int i = 0; i < 1001; ++i) {
		adj[i].clear();
	}
    cin >> n >> m >> u;
    for (int i = 0; i < m; ++i) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
       // adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void DFS_cohuong(int u) {
    cout << u << " ";
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) 
            DFS_cohuong(v);      
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        input();
        DFS_cohuong(u);
        cout << "\n";
    }
    return 0;
}
//** Phai clear het adj moi AC!

