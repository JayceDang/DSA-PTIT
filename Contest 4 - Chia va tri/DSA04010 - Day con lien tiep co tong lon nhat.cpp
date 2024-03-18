#include <bits/stdc++.h>
#define _ 0
using namespace std;

int maxCrossingSum(int a[], int l, int m, int r) {
	int sum = 0; int left_sum = INT_MIN;
	for (int i = m; i >= l; i--) {
		sum += a[i];
		if (sum > left_sum)
			left_sum = sum;
	}
	sum = 0; int right_sum = INT_MIN;
	for (int i = m+1; i <= r; ++i) {
		sum += a[i];
		if (sum > right_sum)
			right_sum = sum;	
	}
	return max(left_sum + right_sum, max(left_sum, right_sum));
}

int maxSubArrSum(int a[], int l, int r) {
	if (l == r)
		return a[l];
	int m = (l+r)/2;
	return max(maxCrossingSum(a, l, m, r), max(maxSubArrSum(a, l, m), maxSubArrSum(a, m+1, r)));
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}	
		cout <<	maxSubArrSum(a, 0, n-1) << "\n";		
	}

	return (0^_^0);
}
