#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n, x;
		cin >> n >> x;

		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}	
		sort(a, a+n); 
		bool ok = false;
		for (int i = 0; i < n-2; ++i) {
			int left = i+1, right = n-1;
			while (a[left] < a[right]) {
				int ans = a[i]+a[left]+a[right];
				if (ans == x) {
					ok = true; 
					break;	
				} 
				else if (ans < x) left++;
				else right--;
			}
		}			
		if (ok == true)
			cout << "YES\n";
		else 
			cout << "NO\n";
	}

	return (0^_^0);
}
