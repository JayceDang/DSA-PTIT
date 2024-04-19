#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m;
int a[1005][1005];
int used[1005][1005];

void BFS() {
	memset(used, -1, sizeof used);
	used[1][1] = 0;
	queue<pair<int, int>> q;
	q.push({1, 1});
	while (!q.empty()) {
		pair<int, int> tmp = q.front(); q.pop();
		int i = tmp.first;
		int j = tmp.second;
		
		if (i >= 1 && i <= n && j + a[i][j] >= 1 && j + a[i][j] <= m && used[i][j+a[i][j]] == -1) {
			q.push({i, j+a[i][j]});
			used[i][j+a[i][j]] = used[i][j]+1;
		}
		if (i + a[i][j] >= 1 && i + a[i][j] <= n && j >= 1 && j <= m && used[i+a[i][j]][j] == -1) {
			q.push({i+a[i][j], j});
			used[i+a[i][j]][j] = used[i][j]+1;
		}
		if (used[n][m] != -1) 
			break;
	}
	cout << used[n][m] << "\n";
}

int main() {
    int T; cin >> T;
    while (T--) {
    	cin >> n >> m;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				cin >> a[i][j];
			}
		}
		BFS();
    }

    return (0^_^0);
}
