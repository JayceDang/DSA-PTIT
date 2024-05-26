#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<int> a(n), b(n, 1);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		
		stack<int> st;
		for (int i = 0; i < n; ++i) {
			while (!st.empty() && a[i] >= a[st.top()]) {
				b[i] += b[st.top()]; st.pop();
			}
			st.push(i);
		}
		
		for (auto x : b)
			cout << x << " ";
		cout << "\n";
	}


	return (0^_^0);
}

