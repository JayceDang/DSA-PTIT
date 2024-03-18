#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, c[105][105], x[105];
int visited[105];
int d = 0, ans = INT_MAX, cmin = INT_MAX;

void Try(int i) {
	for (int j = 1; j <= n; ++j) {
		if (!visited[j]) {
			visited[j] = 1;
			x[i] = j;
			d += c[x[i-1]][x[i]];			
			if (i == n) {
				ans = min(ans, d + c[x[n]][1]);
			}
			else if (d + (n-i+1)*cmin < ans) {
				Try(i+1);
			}				
			d -= c[x[i-1]][x[i]];
			visited[j] = 0;
		}
	}
}

int main() {
	cin >> n;
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> c[i][j];
			if (!c[i][j])
				cmin = min(cmin, c[i][j]);
		}
	}
	memset(visited, 0, sizeof visited);
	x[1] = 1;
	visited[1] = 1;
	Try(2);
	
	cout << ans << "\n";

	return (0^_^0);
}

