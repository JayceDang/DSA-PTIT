#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, k;
int a[100];

void output() {
	for (int i = 1; i <= k; ++i) {
		cout << (char)('A' + a[i] - 1);
	}
	cout << "\n";
}

void Try(int i) {
	for (int j = a[i-1] + 1; j <= n-k+i; ++j) {
		a[i] = j;
		
		if (i == k) {
			output();
		}
		else
			Try(i+1);
	}
	
}

int main() {
	int T; cin >> T;
	
	while (T--) {
		cin >> n >> k;
		
		Try(1);
		
		cout << "\n";
	}


	return (0^_^0);
}

