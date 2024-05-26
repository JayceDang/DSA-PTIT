#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, res = INT_MAX; 
bool vis[50];
int a[50][50];

void Try(int i, int sum = 0, int cnt = 1) {
	if (sum > res) return;
	if (cnt == n) {
		res = min(res, sum + a[i][1]); return;
	}
	for (int j = 1; j <= n; ++j) {
		if (!vis[j]) {
			vis[j] = 1;
			Try(j, sum + a[i][j], cnt + 1);
			vis[j] = 0;
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> a[i][j];
		}
	}
	vis[1] = true;
	Try(1);
	cout << res << "\n";
	
	return (0^_^0);
}

