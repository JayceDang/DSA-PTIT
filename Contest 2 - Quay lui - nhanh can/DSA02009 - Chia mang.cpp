#include <bits/stdc++.h>
#define _ 0
using namespace std;

int a[1000];
int n, k; 
bool ok, check[100];

void Try(int cnt, int sum, int taget) {
	if (ok) return;
	if (cnt == k) {
		ok = true;
		return;
	}
	for (int i = 0; i < n; ++i) {
		if (!check[i]) {
			check[i] = true;
			if (sum == taget/3) {
				Try(cnt+1, 0, taget); return;
			}
			else if (sum < taget/3) 
				Try(cnt, sum + a[i], taget);
			else return;
		}
		check[i] = false;
	}
}
 
int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> k;
		ok = false; 
		memset(check, false, sizeof check);
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			sum += a[i];
		}	
		
		if (sum % k != 0) {
			cout << "0\n";
		}			
		else {
			Try(0, 0, sum);
			if (ok) cout << "1\n";
			else cout << "0\n";
		}
	}

	return (0^_^0);
}
