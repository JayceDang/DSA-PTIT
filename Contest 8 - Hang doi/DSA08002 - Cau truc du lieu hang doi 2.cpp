#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	queue<int> q;
	while (T--) {		
		string s; cin >> s;
		if(s == "PUSH") {
			int x; cin >> x;
			q.push(x);
		}
		else if (s == "POP") {
			if (!q.empty())
				q.pop();
		}
		else if (s == "PRINTFRONT") {
			if (q.empty())
				cout << "NONE\n";
			else cout << q.front() << "\n";
		}
		cout << "\n";			
	}

	return (0^_^0);
}

