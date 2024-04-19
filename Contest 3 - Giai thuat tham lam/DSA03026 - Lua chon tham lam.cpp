#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n, s; cin >> n >> s;
	
	if (n*9 < s || s == 0)
		cout << "-1 -1\n";
	else {
		int a = n, b = s;
		stack<int> st;
		queue<int> cf;
		while (s > 0) {
			n--;
			if (s > 9) {
				st.push(9);
				s -= 9;
			}
			else {
				st.push(s);
				break;
			}
		}
		
		if (n < 0)
			cout << "-1 -1\n";
		else {
			if (n > 0) {
				int x = st.top(); st.pop();
				st.push(x-1);
				while (n > 1) {
					st.push(0);
					n--;
				}
				st.push(1);		
			}		
		}
		
		while (s > 0) {
			a--;
			if (b > 9) {
				cf.push(9);
				b -= 9;
			}
			else {
				cf.push(b);
				break;
			}
		}
		for (int i = 0; i < a; ++i) {
			cf.push(0);
		}
		while (!st.empty()) {
			cout << st.top(); st.pop();
		}
		cout << " ";
		while (!cf.empty()) {
			cout << cf.front(); cf.pop();
		}
	}
	
	return (0^_^0);
}
