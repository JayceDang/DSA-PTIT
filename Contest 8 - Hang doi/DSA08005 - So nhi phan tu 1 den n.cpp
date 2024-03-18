#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;			
		for (int i = 1; i <= n; ++i) {
			stack<int> st;
			int tmp = i;
			while (tmp > 0) {
				st.push(tmp%2);
				tmp /= 2;
			}
			while (!st.empty()) {
				cout << st.top();
				st.pop();
			}
			cout << " ";
		}	
		cout << "\n";		
	}

	return (0^_^0);
}

