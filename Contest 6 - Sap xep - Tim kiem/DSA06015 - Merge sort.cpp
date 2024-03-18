#include <bits/stdc++.h>
#define _ 0
using namespace std;

//Tron 2 day con: d1 [l, m] d2 [m r]
void merge(int a[], int left, int mid, int right) {
	vector<int> x(a+left, a+mid+1);
	vector<int> y(a+mid+1, a+right+1);
	int i = 0, j = 0;
	while (i < x.size() && j < y.size()) {
		if (x[i] <= y[j]) {
			a[left] = x[i];
			++left; ++i;
		}
		else {
			a[left] = y[j];
			++left; ++j;
		}
	}
	while (i < x.size()) {
		a[left] = x[i]; 
		++left; ++i;
	}
	while (j < y.size()) {
		a[left] = y[j]; 
		++left; ++j;
	}
}

void mergeSort(int a[], int left, int right) {
	if (left >= right)
		return;
	int mid = (left+right)/2;
	mergeSort(a, left, mid);
	mergeSort(a, mid+1, right);
	merge(a, left, mid, right);
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n];
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		mergeSort(a, 0, n-1);
		for (int x : a)
			cout << x << " ";
		cout << "\n";
	}

	return (0^_^0);
}
