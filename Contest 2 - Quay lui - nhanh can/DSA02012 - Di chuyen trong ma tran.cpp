#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m, a[100][100], cnt = 0;
bool visited[100][100];
bool check = false;

void Try(int i, int j) {
	if (i == m && j == n)
		++cnt;
	if (i != m && !visited[i+1][j]) {
		visited[i][j] = true;
		Try(i+1, j);
		visited[i][j] = false;
	}
	if (j != n && !visited[i][j+1]) {
		visited[i][j] = true;
		Try(i, j+1);
		visited[i][j] = false;
	}
} 

int main() {
	int T; cin >> T;
	while (T--) {		
		cin >> n >> m;
		cnt = 0;
		for (int i = 1; i <= m; ++i) {
			for (int j = 1; j <= n; ++j) {
				cin >> a[i][j];
				visited[i][j] = false;
			}
		}
		Try(1, 1);
		cout << cnt << "\n";	
	}

	return (0^_^0);
}
