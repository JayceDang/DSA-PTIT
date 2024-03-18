#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
		
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	for (int i = 0; i < n-1; ++i) {
		int min_idx = i;
		for (int j = i+1; j < n; ++j) {
			if (a[j] < a[min_idx])
				min_idx = j;
		}
		swap(a[i], a[min_idx]);
		cout << "Buoc " << i+1 << ": ";
		for (int j = 0; j < n; ++j) {
			cout << a[j] << " ";
		}
		cout << "\n";
	}

	return (0^_^0);
}
