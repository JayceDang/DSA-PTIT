#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, m, a[100];
long long res;
bool ok;

void Try(int i) {
	for (int j = 0; j <= 1; ++j) {
		a[i] = j;
		if (i == m) {
			long long tmp = 0;
			for (int k = 1; k <= m; ++k) {
				tmp = tmp*10 + a[k];
			}
			tmp *= 9;
			if (tmp % n == 0 && tmp >= n) {
				res = min(res, tmp);
				ok = true;
			}							
		}
		else Try(i+1);
	}
}

int main(){
	int T; cin >> T;
	while (T--) {
		cin >> n;	
		m = 1; ok = false; res = 1e18;
		while (m <= 17 && !ok) {
			Try(1);
			m++;	
		}
		cout << res << "\n";
	}
	
	return (0^_^0);	
}
