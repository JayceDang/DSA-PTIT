#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool cmp(int a, int b) {
	return abs(a) > abs(b);
}

int main() {
	int T = 1;	
	while (T--) {
		int n; cin >> n;
		long long ans = 1;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a+n, cmp);
		int cnt = 0;
		for (int i = 0; i < 3; ++i) {
			if (a[i] < 0)
				++cnt;
		}
		if (cnt == 1) {
			int dem = 0;
			for (int i = 0; i < n; ++i) {				
				if (a[i] >= 0) {
					ans *= a[i];
					++dem;
				}
				if (dem == 3)
					break;	
			}
		}
		else if (cnt == 2 || cnt == 0) {
			for (int i = 0; i < 3; ++i) {
				if (a[i] != 0)
					ans *= a[i];
			}
		}
		else if (cnt == 3) {
			ans = a[0]*a[1];
			for (int i = 3; i < n; ++i) {
				if (a[i] > 0) {
					ans *= a[i];break;
				}					
			}
		}		
		cout << ans << "\n";
	}

	return (0^_^0);
}
