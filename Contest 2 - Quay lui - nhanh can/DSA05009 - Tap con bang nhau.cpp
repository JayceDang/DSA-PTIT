#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, a[101];
bool check;

void Try(int sum, int i, int k) {
	if (check)
		return;
	for (int j = i+1; j <= n; ++j) {
		if (sum + a[i] == k && !check) {
			check = true;
			cout << "YES\n";
			return;
		}
		else if (sum + a[j] < k)
			Try(sum + a[j], j, k);
	}
}

int main() {
	int T; cin >> T;
	
	while (T--) {
		cin >> n;
		int sum = 0; check = false;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			sum += a[i];
		}
		
		if (sum & 1) {
			cout << "NO\n";
		}			
		else {
			Try(0, 0, sum/2);
		}	
	}

	return (0^_^0);
}

