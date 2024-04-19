#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	long long res = 0;
	int a[n+1];
	
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] > 0)
			res += a[i]*2;
	}
	
	cout << res << "\n";
	
	return (0^_^0);
}
