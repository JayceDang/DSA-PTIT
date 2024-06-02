#include <bits/stdc++.h>
#define _ 0
using namespace std;

int cntJump(int start, int dp[]) {
	int cnt = 0;
	while (start != -1) {
		start = dp[start];
		++cnt;
	}
	return cnt-1;
}

int main() {
	int T = 1;
	while (T--) {
		int n, q; cin >> n >> q;
	
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int dp[n] = {-1}; 
		stack<int> st;
		
		//Vi tri dau tien right higher
		for (int i = n-1; i >= 0; i--) {
			while (!st.empty() && a[st.top()] <= a[i]) {
				st.pop();
			}
			if (!st.empty()) {
				dp[i] = st.top();
			}
			else {
				dp[i] = -1;			
			}
			st.push(i);
		}
		
		for (int i = 0; i < q; ++i) {
			int start; cin >> start;
			cout << cntJump(start-1, dp) << "\n";
		}
		cout << "\n";
	}
	
	return (0^_^0);
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/

