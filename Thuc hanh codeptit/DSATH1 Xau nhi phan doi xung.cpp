#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n;
int a[100];

void output(int x) {
	for (int i = 1; i <= x; ++i)
		cout << a[i];
	for (int i = x; i >= 1; i--)
		cout << a[i];
	cout << " ";
}

void Try(int x, int y) {
	for (int i = 0; i <= 1; ++i) {
		a[x] = i;
		if (x == y)
			output(y);
		else
			Try(x+1, y);
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 2; i <= n; i += 2) {
			Try(1, i/2);
		}
		cout << "\n";
	}

	return (0^_^0);
}
