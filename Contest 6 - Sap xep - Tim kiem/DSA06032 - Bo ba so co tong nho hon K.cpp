#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		long long n, x;
		cin >> n >> x;

		long long a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}	
		sort(a, a+n); 
		long long cnt = 0;
		for (int i = 0; i < n-2; ++i) {
			long long left = i+1, right = n-1;
			while (a[left] < a[right]) {
				long long ans = a[i]+a[left]+a[right];
				if (ans < x) {
					cnt += right - left;
					++left;
				}
				else {
					--right;
				}
			}
		}	
		cout << cnt << "\n";	
	}

	return (0^_^0);
}
