#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool ret(char c) {
	if (c == '(' || c == ')')
		return 0;
	if (c == '{' || c == '}')
		return 1;
	if (c == '[' || c == ']')
		return 2;
}

int main() {
	int T; cin >> T;
	while (T--) {
		string s;
		cin >> s;
		stack<char> st;
		
		bool ok = true;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
				st.push(s[i]);
			else {
				if (st.empty()) ok = false;
				else {
					if (ret(st.top()) == ret(s[i]))
						st.pop();
					else ok = false;
				}
			}
		}
		if (ok)
			cout << "YES\n";
		else cout << "NO\n"; 
	}
		
	return (0^_^0);
}
