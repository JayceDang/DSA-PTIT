#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
    	set<int> st;
    	for (int i = 0; i < n; ++i) {
    		long long x;
    		cin >> x;
    		while (x > 0) {
    			st.insert(x%10);
    			x /= 10;
			}
		}
    	for (auto x : st)
    		cout << x << " ";
    	cout << "\n";
	}
     
    return 0;
}
