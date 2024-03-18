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

long long rev(long long n) {
	long long ans = 0;
	while (n > 0) {
		ans = ans*10 + n%10;
		n /= 10;
	}
	return ans;
}

int main() {
    int T; cin >> T;
    while (T--) {
    	long long n;
    	cin >> n;
    	cout << POW(n, rev(n)) << "\n";
	}
    
    return 0;
}
