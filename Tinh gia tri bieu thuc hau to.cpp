#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool check(char c) {
	return c == '+' || c == '-' || c == '*' || c == '/';
}

int Hauto(string& s) {
	stack<int> st;
	for (int i = 0; i < s.size(); ++i) {
		if (check(s[i])) {
			int x = st.top(); st.pop();
			int y = st.top(); st.pop();
			int z = 0;
			if (s[i] == '+')
				z = x+y;
			if (s[i] == '-')
				z = y-x;
			if (s[i] == '*')
				z = x*y;
			if (s[i] == '/')
				z = y/x;
			st.push(z);
		}
		else {
			st.push(s[i]-'0');	
		}
	}
	
	return st.top();
}

int main() {
	string s; cin >> s;
	cout << Hauto(s);


	return (0^_^0);
}

