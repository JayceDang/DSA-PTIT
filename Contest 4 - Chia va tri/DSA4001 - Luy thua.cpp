#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

long long POW(long long n, long long k) {
	if (k == 0)	return 1;
	if (k == 1) return n;
	long long x = POW(n, k/2)%mod;
	long long y = x*x%mod;
	if (k % 2 == 0)
		return y;
	return (n*y)%mod;
}

int main() {
    int T; cin >> T;
    while (T--) {
    	long long n, k;
    	cin >> n >> k;
    	cout << POW(n, k) << "\n";
	}
    
    return (0^_^0);
}
