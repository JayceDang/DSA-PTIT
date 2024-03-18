#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

int main() {    
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
    	vector<pair<int, int>> v;
    	for (int i = 0; i < n; ++i) {
    		int x; cin >> x;
    		v.push_back({x, i});
		}
    	
    	sort(v.begin(), v.end(), cmp);
    	int res = -1e9;
//    	for (int i = 0; i < n; ++i) {
//    		cout << v[i].first << " " << v[i].second << "\n";
//		}
		int x = v[0].second;
		for (int i = 1; i < n; ++i) {
			if (v[i].second - x > res) {
				res = v[i].second - x;
			}
			x = min(x, v[i].second);
		}
		
		cout << res << "\n";
	}
     
    return (0^_^0);
}
