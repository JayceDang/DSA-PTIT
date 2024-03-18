#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {    
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        set<int> st;
        
        for (int i = 0; i < n; ++i) {
        	int x; cin >> x;
        	st.insert(x);
		}
		
		if (st.size() == 1) {
			cout << -1;
		}
		else {
			int cnt = 0;
			for (auto x : st) {
				cout << x << " ";
				++cnt;
				if (cnt == 2)
					break;
			}
		}

        cout << "\n";
    }

    return (0^_^0);
}
