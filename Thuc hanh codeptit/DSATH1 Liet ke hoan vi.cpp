#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, k, a[100] = {1};

void printArr() {
	for (int i = 1; i <= k; ++i) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

void Try(int i) {
	for (int j = a[i-1]; j <= n; ++j) {
		a[i] = j;
		if (i == k)
			printArr();
		else
			Try(i+1);
	}
}

int main() {
	cin >> n >> k;
	Try(1);
	return (0^_^0);
}
