#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, k, a[100];
		cin >> n >> k;
		int d[100] = {0};
		for (int i = 1; i <= k; ++i) {
			cin >> a[i];
			d[a[i]] = 1;
		}
		
		int i = k;
		while (i > 0 && a[i] == n-k+i)
			i--;
		if (i <= 0)
			cout << k;
		else {
			a[i] += 1;
			for (int j = i+1; j <= k; ++j) {
				a[j] = a[j-1] + 1;
			}
			for (int j = 1; j <= k; ++j) {
				d[a[j]] = false;
			}
			int ans = 0;
			for (int j = 1; j <= 40; ++j) {
				if (d[j])
					++ans;
			}
			cout << ans; 
		}
		cout << "\n";	
	}

	return (0^_^0);
}

