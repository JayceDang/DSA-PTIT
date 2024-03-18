#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {    
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        int a[n+1];
        long long sum = 0, res = 0;
        for (int i = 1; i <= n; ++i) {
        	cin >> a[i];
        	sum += a[i];
		}
		int idx = 0;
        
        for (int i = 1; i <= n; ++i) {
        	res += a[i];
        	if (res == sum - res - a[i+1]) {
        		idx = i;
        		break;
			}    		
		}
        
        if (!idx)
        	cout << "-1\n";
        else 
        	cout << idx+1 << "\n";
    }

    return (0^_^0);
}
