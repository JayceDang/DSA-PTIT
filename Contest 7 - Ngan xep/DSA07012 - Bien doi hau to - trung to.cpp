#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool priority(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '%')
		return 1;
	return 0;
}

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		stack <string> st;

		for (int i = 0; i < s.size(); ++i) {
            
			if (priority(s[i])) {
				
			}
			else st.push(string(1, s[i]));
		}

		cout << st.top() << "\n";
	}

	return (0^_^0);
}
