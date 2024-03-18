#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {    
    int n; cin >> n;
    
    long long a[n+1];
    vector<long long> v_chan, v_le;
    for (int i = 1; i <= n; ++i) {
    	long long x; cin >> x;
    	if (i & 1)
    		v_le.push_back(x);
    	else v_chan.push_back(x);
	}
	sort(v_le.begin(), v_le.end());
	sort(v_chan.begin(), v_chan.end(), greater<long long>());
	if (n & 1) {
		for (int i = 0; i < n/2; ++i) {
			cout << v_le[i] << " " << v_chan[i] << " ";
		}
		cout << v_le[v_le.size()-1] << "\n";
	}
	else {
		for (int i = 0; i < n/2; ++i) {
			cout << v_le[i] << " " << v_chan[i] << " ";
		}
		cout << "\n";
	}
	
    return (0^_^0);
}
