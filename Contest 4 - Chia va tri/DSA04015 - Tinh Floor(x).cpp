#include <bits/stdc++.h>
#define _ 0
using namespace std;

int idx = 0;

int binaSearch(int a[], int n, int x) {
	int l = 0, r = n-1;	
	while (l <= r) {
		int mid = (l+r)/2;
		if (a[mid] == x) {
			idx = mid;
			return idx;
		}		
		else if (a[mid] > x)
			r = mid - 1;	
		else
			l = mid + 1;
	}
	return -1;
}

int main() {
	int T; cin >> T;
	
	while (T--) {
		int n, x; cin >> n >> x;		
		int a[n+1];		
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		idx = 0;
		
		if (x < a[0] && x > a[n-1])
			cout << -1;
		
		cout << "\n";	
	}

	return (0^_^0);
}

