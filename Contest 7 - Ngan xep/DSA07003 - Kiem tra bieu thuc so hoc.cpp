#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		string s; 
		getline(cin, s);
		bool ok;
		stack<char> st;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == ')') {
				ok = true;
				char top = st.top(); st.pop();
				
				while (top != '(') {
					if (top == '+' || top == '-' || top == '*' || top == '/')
						ok = false;
					top = st.top(); st.pop();
				}
				if (ok) break;
			}		
			else st.push(s[i]);
		}
		if (ok)
			cout << "Yes\n";
		else cout << "No\n";
	}

	return (0^_^0);
}
