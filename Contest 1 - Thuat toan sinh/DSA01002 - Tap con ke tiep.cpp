#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, k, a[1005];

void next() {
	int i = k;
	while (i >= 1 && a[i] == n-k+i) {
		--i;
	}
	if (i == 0) {
		for (int i = 1; i <= k; ++i) {
			cout << i << " ";
		}
	}
	else {
		a[i]++;
		for (int j = i+1; j <= k; ++j) {
			a[j] = a[j-1] + 1;
		}
		for (int i = 1; i <= k; ++i) {
			cout << a[i] << " ";
		} 
	}
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		cin >> n >> k;
		for (int i = 1; i <= k; ++i) {
			cin >> a[i];
		}
		next();
		cout << "\n";		
	}

	return (0^_^0);
}
