#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		string s, token;
		getline(cin, s);
		stringstream ss(s);
		stack<string> st;
		while (ss >> token)
			st.push(token);
		
		while (!st.empty()) {
			cout << st.top() << " ";
			st.pop();
		}
		cout << "\n";	
	}

	return (0^_^0);
}
