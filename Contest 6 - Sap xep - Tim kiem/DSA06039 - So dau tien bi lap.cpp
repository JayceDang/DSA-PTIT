#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {    
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        long long a[n];
        map<long long, int> mp;
        for (int i = 0; i < n; ++i) {
        	cin >> a[i];
        	mp[a[i]]++;
		}
		bool ok = false;
		long long ans = 0;
		for (int i = 0; i < n; ++i) {
			if (mp[a[i]] > 1) {
				ans = a[i];
				ok = true;
			}
			if (ok) break;					
		}
		if (ok)
			cout << ans;
		else cout << "NO";
		
        cout << "\n";
    }

    return (0^_^0);
}
