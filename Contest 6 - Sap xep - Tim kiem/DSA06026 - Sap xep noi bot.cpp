#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i) {
		bool check = true;
		for (int j = 0; j < n-1; ++j) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
				check = false;
			}
		}	
		if (check) break;	
		cout << "Buoc " << i+1 << ": ";
		for (int j = 0; j < n; ++j) {
			cout << a[j] << " ";
		}
		cout << "\n";
	}

	return (0^_^0);
}


