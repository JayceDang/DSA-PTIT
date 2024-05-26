#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, cnt, a[100], cot[100], c1[100], c2[100];

void Try(int i) {
	for (int j = 1; j <= n; ++j) {
		if (cot[j] == 1 && c1[i-j+n] == 1 && c2[i+j-1] == 1) {
			a[i] = j;
			cot[j] = c1[i-j+n] = c2[i+j-1] = 0;
			if (i == n) {
				++cnt;				
			}
			else 
				Try(i+1);
			cot[j] = c1[i-j+n] = c2[i+j-1] = 1;
		} 
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 0; i <= 50; ++i) {
			cot[i] = c1[i] = c2[i] = 1;
			a[i] = 0;
		}
		cnt = 0;
		
		Try(1);
		cout << cnt << "\n";		
	}

	return (0^_^0);
}

