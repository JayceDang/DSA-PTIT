#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {    
    int T; cin >> T;
    while (T--) {
        int n, k; cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; ++i) {
        	cin >> a[i];
		}
		int idx = 0;
		for (int i = 1; i < k; ++i) {
			if (a[idx] <= a[i]) {
				idx = i;
			}
		}
		cout << a[idx] << " ";
		for (int i = 1; i <= n-k; ++i) {
			if (a[idx] <= a[k+i-1]) {
				idx = k+i-1;
			}
			if (idx < i) {
				idx = i;
				for(int j = i; j <= k+i-1; ++j){
					if (a[idx] <= a[j]) 
						idx = j;
				}
			}			
			cout << a[idx] << " ";
		}
		cout << "\n";
    }

    return (0^_^0);
}
