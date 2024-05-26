#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	long long tong = 0, kq = 0;
	map<long long, long long> a;
	a[0]++;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		tong += x;
		kq += a[tong];
		a[tong]++; 
	}
	cout << kq << "\n";
	
	return (0^_^0);
}

