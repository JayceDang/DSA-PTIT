#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool check_prime(int n) {
	for (int i = 2; i <= sqrt(n); ++i) 
		if (n % i == 0)
			return false;
	return n > 1;
}

int main() {    
    int T; cin >> T;
    while (T--) {
        int n;
        cin >> n;
        
        bool ok = 0;
        for (int i = 0; i <= n/2 ; ++i) {       	
        	if (check_prime(i) && check_prime(n-i)) {
        		cout << i << " " << n-i;
        		ok = 1;
			}
			if (ok)	break;
		}
        if (!ok)
        	cout << -1;

        cout << "\n";
    }

    return (0^_^0);
}
