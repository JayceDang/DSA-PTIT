#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n;
	    cin >> n;
	    int a[n], dp[n] = {1};
	    vector<int> a(n), b(n, 1);
	
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	
	    stack<int> st;
	    for (int i = 0; i < n; i++) {
	        while (!st.empty() && a[i] >= a[st.top()]) {
	            b[i] += b[st.top()];
	            st.pop();
	        }
	        st.push(i);
	    }
	
	    for (int i = 0; i < n; i++) {
	        cout << b[i] << " ";
	    }
	    cout << "\n";
	}

	return (0^_^0);
}
