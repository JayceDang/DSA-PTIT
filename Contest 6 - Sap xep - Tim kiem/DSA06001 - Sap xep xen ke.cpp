#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}	
		sort(a, a+n);
		vector<int> v;
		int left = 0, right = n-1;
		while (left < right) {
			
			v.push_back(a[right--]);v.push_back(a[left++]);
		}
		if (n&1) 
			v.push_back(a[n/2]);
		
		for (auto x : v) {
			cout << x << " ";
		}
		cout << "\n";
	}

	return (0^_^0);
}

