#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, k, res; 
int a[20][20];
int x[20];
bool ok[20];
vector<int> ans;

void Try(int i) {
	for (int j = 1; j <= n; ++j) {
		if (!ok[j]) {
			x[i] = j;
			ok[j] = true;
			if (i == n) {
				res = 0;
				for (int hang = 1; hang <= n; ++hang) {
					res += a[hang][x[hang]];
				}
				if (res == k) {
					for (int hang = 1; hang <= n; ++hang)
						ans.push_back(x[hang]);
				}
					
			}
			else Try(i+1);
			ok[j] = false;
		}
	}
}

int main() {
	
	cin >> n >> k;
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> a[i][j];
		}
	}
	
	Try(1);
	
	cout << ans.size() / n;	
	for (int i = 0; i < ans.size(); ++i) {
		if (i % n == 0)
			cout << "\n";
		cout << ans[i] << " ";
	}
	
	return (0^_^0);
}
