#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		long long n, m, k; cin >> n >> m >> k;
		long long a[n], b[m], c[k];
		
		for (int i = 0; i < n; ++i) cin >> a[i];
		for (int i = 0; i < m; ++i) cin >> b[i];
		for (int i = 0; i < k; ++i) cin >> c[i];
			
		long long x = 0, y = 0, z = 0;
		bool check = false;
		
		while (x < n && y < m && z < k) {
			if (a[x] == b[y] && a[x] == c[z]) {
				cout << a[x] << " ";
				check = true;
				++x; ++y; ++z;
				continue;
			}
			if (a[x] < b[y]) ++x;
			else if (b[y] < c[z]) ++y;
			else ++z;
		}		
		
		if (!check)
			cout << "-1";
			
		cout << "\n";
	}
	
	return (0^_^0);
}
