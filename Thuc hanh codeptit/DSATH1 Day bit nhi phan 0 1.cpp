#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n;
int a[100];

void printArr() {
	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		if (a[i])
			++cnt;
	}	
	if (cnt % 2 == 0) {
		for (int i = 1; i <= n; ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}	
}

void Try(int i) {
	for (int j = 0; j <= 1; ++j) {
		a[i] = j;
		if (i == n)
			printArr();
		else
			Try(i+1);
	}
}

int main() {
	cin >> n;
	Try(1);
	return (0^_^0);
}
