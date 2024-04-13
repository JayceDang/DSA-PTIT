#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, k, a[100];
char c;

void printArr() {
	for (int i = 1; i <= k; ++i) {
		cout << char(a[i] + 'A');
	}
	cout << "\n";
}

void Try(int i) {
	for (int j = a[i-1]; j <= n-k+1; ++j) {
		a[i] = j;
		if (i == k)
			printArr();
		else
			Try(i+1);
	}
}

int main() {
	cin >> c >> k;
	n = c - (int)'A' + 1;
	
	Try(1);
	
	return (0^_^0);
}
