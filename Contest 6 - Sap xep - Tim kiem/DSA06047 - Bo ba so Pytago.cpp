#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		long long a[n];
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a+n);
		for (int i = 0; i < n; ++i) {
			int left = 0, right = n-1;
			while (left < right) {
				if (pow(a[left], 2)+pow(a[right], 2) == pow(a[i], 2)) goto end;
				else if (pow(a[left], 2)+pow(a[right], 2) < pow(a[i], 2)) ++left;	
				else right--;
			}
		}
		cout << "NO\n"; goto endl;
		end: cout << "YES\n";
		endl:;
	}
	return 0;
}

