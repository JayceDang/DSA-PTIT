#include <bits/stdc++.h>
#define _ 0
using namespace std;

int priority(char c) {
	if (c == '^')
		return 3;
	if (c == '*' || c == '/')
		return 2;
	if (c == '+' || c == '-')
		return 1;
	return -1;
}

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		string out = "";
		stack<char> st;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '(') {
				st.push(s[i]);
			}
			else if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
				out += string(1, s[i]);
			}
			else if (s[i] == ')') {
				while (!st.empty() && st.top() != '(') {
					char y = st.top();
					st.pop();
					out += string(1, y);
				}
				if (st.top() == '(') {
					st.pop();
				}
			}
			else {
				while(!st.empty() && priority(s[i]) <= priority(st.top())){
					char y = st.top(); st.pop();
					out += string(1, y);
				}
				st.push(s[i]);
			}
		}
		while(!st.empty() && st.top() != '('){
			char y = st.top(); st.pop();
			out += string(1, y);
		}	
		cout << out << "\n";
	}

	return (0^_^0);
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/
