#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {    
    int T; cin >> T;
    while (T--) {
    	int n; cin >> n;
    	int cnt = 0;
    	for (int i = 0; i < n; ++i) {
    		int x; cin >> x;
    		if (x == 0)
    			++cnt;
		}
    	cout << cnt << "\n";
	}
     
    return (0^_^0);
}
