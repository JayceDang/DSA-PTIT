#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
    	int n, m, x;
	    cin >> n >> m;
	
	    set<int> a, b;
	    for (int i = 0; i < n; ++i) {
	        cin >> x;
	        a.insert(x);
	    }
	    for (int i = 0; i < m; ++i) {
	        cin >> x;
	        b.insert(x);
	    }
	
	    map<int, int> mp;
	    for (int i : a) mp[i]++;
	    for (int i : b) mp[i]++;
	
	    for (auto i : mp) {
	        cout << i.first << " ";
	    }
	    cout << endl;
	    for (auto i : mp) {
	        if (i.second >= 2)
	            cout << i.first << " ";
	    }	
		cout << "\n";
	}
    
    return 0;
}
