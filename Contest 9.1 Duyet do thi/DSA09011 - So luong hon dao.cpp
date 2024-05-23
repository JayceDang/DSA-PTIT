#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m;
int a[505][505];
pair<int, int> p[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 0}, {1, 1}, {1, -1}, {0, -1}};

void Dfs(int i, int j) {
	a[i][j] = 0;
	for (int k = 0; k < 8; ++k) {
		int dx = i + p[k].first;
		int dy = j + p[k].second;
		if (dx >= 0 && dx < n && dy >= 0 && dy < m && a[dx][dy]) {
			Dfs(dx, dy);
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> m;
		int dem = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (a[i][j]) {
					++dem;
					Dfs(i, j);
				}
			}
		}
		cout << dem << "\n";		
	}

	return (0^_^0);
}
