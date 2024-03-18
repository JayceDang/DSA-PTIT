#include <bits/stdc++.h>
#define _ 0
using namespace std;

const int mod = 1e9 + 7;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n; cin >> n;
        long long a[n];
        for (int i = 0; i < n; ++i) {
        	cin >> a[i];
		}
		sort(a, a+n);
		
		long long ans = 0;
		for (int i = 0; i < n; ++i) {
			ans += a[i]*i;
			ans %= mod;
		}
		
        cout << ans << "\n";
    }

    return (0^_^0);
}
