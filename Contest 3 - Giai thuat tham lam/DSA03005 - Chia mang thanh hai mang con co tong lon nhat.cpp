#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) {
        	cin >> a[i];
		}
		sort(a, a+n);
		int ans = 0;
		if (k > n-k) {
			for (int i = n-1; i >= n-k; i--) {
				ans += a[i];
			}
			for (int i = 0; i < n-k; ++i) {
				ans -= a[i];
			}
		}
		else {
			for (int i = 0; i < k; ++i) {
				ans -= a[i];
			}
			for (int i = k; i < n; ++i) {
				ans += a[i];
			}
		}
		cout << ans << "\n";
    }

    return (0^_^0);
}
