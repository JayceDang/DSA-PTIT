#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m, p;
int res = 1;
vector<int> v[1001];
bool check[1001], used[100][100];

void DFS(int u, int cnt) {
	res = max(res, cnt);
	for (int x : v[u]) {
		if (!used[u][x]) {
			used[u][x] = used[x][u] = true;
			DFS(x, cnt+1);
			used[u][x] = used[x][u] = false;
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		res = 1;
		for (int i = 0; i < 1001; ++i)
			v[i].clear();
		int n, m; cin >> n >> m;
		p = n;
		for (int i = 0; i < m; ++i) {
			int x, y; cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		
		for (int i = 0; i < p; ++i) {
			memset(used, false, sizeof used);
			DFS(i, 0);
		}
		cout << res << "\n";	
	}
	return (0^_^0);
}
	
