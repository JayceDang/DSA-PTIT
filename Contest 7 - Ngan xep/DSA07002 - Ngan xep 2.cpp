#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int Q; cin >> Q;
	stack<int> st;
	while (Q--) {
		string s;
		int x;
		cin >> s;
		
		if (s == "PUSH") {
			cin >> x;
			st.push(x);
		}
		else if (s == "POP") {
			if (!st.empty())
				st.pop();
		}
		else {
			if (!st.empty())
				cout << st.top();
			else
				cout << "NONE";
		}
		cout << "\n";
	}

	return (0^_^0);
}
