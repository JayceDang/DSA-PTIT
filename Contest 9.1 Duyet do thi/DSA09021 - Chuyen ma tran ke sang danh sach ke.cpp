#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	
	int a[n+1][n+1] = {0};	
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> a[i][j];
		}
	}
	queue<string> q;
	for (int i = 1; i <= n; ++i) {
		string ans = "";
		for (int j = 1; j <= n; ++j) {
			if (a[i][j]) {
				ans += to_string(j) + " ";
			}
		}
		q.push(ans);
	}
	
	while (!q.empty()) {
		cout << q.front() << "\n";
		q.pop();
	}
	
	return (0^_^0);
}
