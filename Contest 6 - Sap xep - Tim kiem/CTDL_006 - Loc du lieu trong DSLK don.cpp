#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	map<int, int> mp;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mp[a[i]]++;
	}
	for (int i = 0; i < n; ++i) {
		if (mp[a[i]] >= 1)
			cout << a[i] << " ";
		mp[a[i]] = 0;
	}

	return (0^_^0);
}
