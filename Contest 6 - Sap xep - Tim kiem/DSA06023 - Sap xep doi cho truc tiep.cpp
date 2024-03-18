#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	
	for (int i = 0; i < n; ++i) 
		cin >> a[i];
		
	for (int i = 0; i < n-1; ++i) {
		for (int j = i+1; j < n; ++j) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}			
		}
		cout << "Buoc " << i+1 << ": ";
		for (int j = 0; j < n; ++j) 
			cout << a[j] << " ";
		cout << "\n";
	}

	return (0^_^0);
}
