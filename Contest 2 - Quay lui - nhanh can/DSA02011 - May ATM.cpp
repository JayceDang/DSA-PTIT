#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, ans;
long long s, sum, a[100];
bool check;

void Try(int i, int x) {
	for (int j = x; j <= n; ++j) {
		sum += a[j];
		if (sum <= s) {
			if (sum == s) {
				check = true;
				ans = min(ans, i);
			}
			else Try(i+1, j+1);	
		}
		sum -= a[j];	
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> s;	
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}		
		sum = 0, ans = 1e9+7;
		check = false;
		
		Try(1, 1);
		
		check ? cout << ans : cout << "-1";
		
		cout << "\n";
	}
	
	return (0^_^0);
}
