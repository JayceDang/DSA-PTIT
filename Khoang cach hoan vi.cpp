#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n;
int a[100], b[100];

void output() {
	if (a[1]-a[n] > 0) {
			for (int i = 1; i <= n; ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}

void Try(int i) {
	for (int j = 1; j <= n; ++j) {
		if (!b[j]) {
			b[j] = 1;
			a[i] = j;
			if (i == n) {
				output();
			}
			else 
				Try(i+1);
				b[j] = 0;
		}
	}
}

int main() {
	cin >> n;
	
	Try(1);

	return (0^_^0);
}
