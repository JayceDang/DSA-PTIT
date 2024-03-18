#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;		
	int a[n+1][n+1] = {0};
	cin.ignore();
	for (int i = 1; i <= n; ++i) {
		string s; getline(cin, s);
		stringstream ss(s);
		int x;
		
		while (ss >> x) {
			a[i][x] = 1;
			a[x][i] = 1;
		}	
	}
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	return (0^_^0);
}
