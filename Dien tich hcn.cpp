#include <bits/stdc++.h>
#define _ 0
using namespace std;

int solve(vector<int>& v) {
    stack<int> st;
    v.push_back(0);
    int maxArea = 0;
    for (int i = 0; i < v.size(); ++i) {
        while (!st.empty() && v[i] < v[st.top()]) {
            int h = v[st.top()]; st.pop();
            int w = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, h*w);
        }
        st.push(i);
    }
	return maxArea;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n, m; cin >> n >> m;	
		int a[n+1][m+1];
		
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				cin >> a[i][j];
			}
		}
		vector<int> v(m+1, 0);
		int res = 0;
		for (int i = 1; i <= n; ++i) {
	        for (int j = 1; j <= m; ++j) {
	            if (a[i][j] == 0) {
	                v[j] = 0;
	            } else {
	                v[j] += 1;
	            }
	        }
	        cout << solve(v) << "\n";
	        res = max(res, solve(v));
	    }
		cout << res << "\n";
	}

	return (0^_^0);
}
