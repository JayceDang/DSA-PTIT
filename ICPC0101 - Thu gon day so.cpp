#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	
	int a[n];
	stack<int> st;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int j = 1;
	st.push(a[0]);
	for (int i = 1; i < n; ++i) {
		if (!st.empty()) {
			if ((st.top()+a[i]) % 2 == 0) {
				st.pop();
			}
			else {
				st.push(a[i]);
			}
		}
		else {
			st.push(a[i]);
		}
	}
	cout << st.size();

	return (0^_^0);
}

