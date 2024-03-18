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
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void DFS_vohuong(int u) {
    stack<int> st;
    st.push(u);
    
    while (!st.empty()) {
		int x = st.top(); st.pop();
		if (!visited[x]) {
			cout << x << " ";
			visited[x] = true;
		}  
		for (int v : adj[x]) {
			if (!visited[v]) {
				st.push(x);
				st.push(v);
				break;
			}
		} 	
	}

}

int main() {
    int T; cin >> T;
    while (T--) {
        input();
        DFS_vohuong(u);
        cout << "\n";
    }
    return 0;
}
//** Phai clear het adj moi AC!
