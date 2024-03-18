#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, a[100][100];
bool visited[100][100];
vector<string> res;

bool check = false;

void Try(int i, int j, string s) {
	if (a[1][1] == 0 || a[n][n] == 0) return;
	if (i == n && j == n)
		res.push_back(s);
	
	if (a[i+1][j] == 1 && i != n && !visited[i+1][j]) {
		visited[i][j] = true;
		Try(i+1, j, s + "D");
		visited[i][j] = false;
	}
	if (a[i][j+1] == 1 && j != n && !visited[i][j+1]) {
		visited[i][j] = true;
		Try(i, j+1, s + "R");
		visited[i][j] = false;
	}
	if (a[i][j-1] == 1 && j != 1 && !visited[i][j-1]) {
		visited[i][j] = true;
		Try(i, j-1, s + "L");
		visited[i][j] = false;
	}
	if (a[i-1][j] == 1 && i != 1 && !visited[i-1][j]) {
		visited[i][j] = true;
		Try(i-1, j, s + "U");
		visited[i][j] = false;
	}
} 

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				cin >> a[i][j];
				visited[i][j] = false;
			}
		}
		res.clear();
		Try(1, 1, "");
		if (res.size() == 0)
			cout << -1;
		else {
			sort(res.begin(), res.end());
			for (int i = 0; i < res.size(); ++i) {
				cout << res[i] << " ";
			}
		}
		cout << "\n";	
	}

	return (0^_^0);
}
