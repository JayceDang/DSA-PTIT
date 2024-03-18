#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {    
    int T; cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> v;
        for (int i = 0; i < m+n; ++i) {
        	int x; cin >> x;
        	v.push_back(x);
		}
		sort(v.begin(), v.end());
		for (auto x : v)
			cout << x << " ";

        cout << "\n";
    }

    return (0^_^0);
}

