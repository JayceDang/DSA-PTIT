#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		
		for (long long i = 1; i < pow(2, n); ++i) {
			stack<int> st;
			long long tmp = i;
			while (tmp > 0) {
				st.push(tmp % 2);
				tmp /= 2;
			}
			while (!st.empty()) {
				if (st.top() == 0)
					cout << 6;
				else cout << 8;
				st.pop();
			}
			cout << " ";
		}
		cout << "\n";			
	}
	
	return (0^_^0);
}

