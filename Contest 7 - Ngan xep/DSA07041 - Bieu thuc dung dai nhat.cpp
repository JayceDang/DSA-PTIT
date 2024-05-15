#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;	
		
		stack<char> st;
		int ans = 0;
		
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '(') {
				st.push(s[i]);
			}			
			else {
				if (!st.empty()) {
					st.pop();
					ans += 2;
				}
			}
		}
		cout << ans << "\n";
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

