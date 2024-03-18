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
		//Tim vi tri phu hop cho i
		int j = i;
		while (j > 0 && a[i] < a[j-1])
			--j;
		//Dua i ve dung vi tri
		int tmp = a[i];
		for (int k = i; k > j; k--) 
			a[k] = a[k-1];
		a[j] = tmp;			
	}
	
cout << "Buoc " << i+1 << ": ";
		for (int j = 0; j < n; ++j) {
			cout << a[j] << " ";
		}
		cout << "\n";
	return (0^_^0);
}

