#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool priority(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '%')
		return 1;
	return 0;
}

int Tinh(int x, int y, char z) {
	if (z == '+')
		return y+x;
	if (z == '-')
		return y-x;
	if (z == '*')
		return x*y;
	if (z == '/')
		return y/x;
	if (z == '^')
		return pow(y, x);
	if (z == '%')
		return y%x;
}

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		stack <int> st;

		for (int i = 0; i < s.size(); ++i) {
			if (!priority(s[i])) {
				st.push(s[i]-'0');
			}
			else {
				int x = st.top(); st.pop();
				int y = st.top(); st.pop();
				int ans = Tinh(x, y, s[i]);
				st.push(ans);
			}
		}

		cout << st.top() << "\n";
	}

	return (0^_^0);
}
