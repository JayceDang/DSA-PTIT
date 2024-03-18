#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, k, a[1001], cnt = 1, b[1001], start = 0;

void out() {
	for (int i = 1; i <= k; ++i) {
		cout << b[i] << ' ';
	}
	cout << endl;
}

void Try(int i) {
	for (int j = start + 1; j < cnt; ++j) {
		b[i] = a[j];
		start = j;
		if (i == k)
			out();
		else
			Try(i + 1);
	}
}

int main() {
	cin >> n >> k;
	set<int> se;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		se.insert(x);
	}

	for (int x : se) {
		a[cnt++] = x;
	}

	Try(1);

	return (0^_^0);
}