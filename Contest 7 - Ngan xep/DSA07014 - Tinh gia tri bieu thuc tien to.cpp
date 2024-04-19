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
		stack <int> st;

		for (int i = s.size()-1; i >= 0; i--) {
			if (priority(s[i])) {
				int x = st.top(); st.pop();
                int y = st.top(); st.pop();
                int z;
                if (s[i] == '+') z = x+y;
                else if (s[i] == '-') z = x-y;
                else if (s[i] == '*') z = x*y;
                else if (s[i] == '/') z = x/y;
                else if (s[i] == '^') z = x^y;
                else if (s[i] == '%') z = x%y;
                st.push(z);
			}
			else st.push(s[i] - '0');
		}

		cout << st.top() << "\n";
	}

	return (0^_^0);
}
