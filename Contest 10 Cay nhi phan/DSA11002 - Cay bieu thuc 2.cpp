#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool check(string c) {
	return (c == "+" || c == "-" || c == "*" || c == "/") ? 1 : 0;
}

long long Convert(string& s) {
	long long ans = 0;
	for (int i = 0; i < s.size(); ++i) {
		ans = ans*10 + s[i]-'0';
	}
	return ans;
}

long long solve(vector<string> v) {
	queue<long long> st;
	for (int i = v.size()-1; i >= 0; i--) {
		if (check(v[i])) {
			long long x = st.front(); st.pop();
			long long y = st.front(); st.pop();
			long long z;	
			if (v[i] == "+") z = x+y;
            else if (v[i] == "-") z = y-x;
            else if (v[i] == "*") z = x*y;
            else if (v[i] == "/") z = y/x  ;
            st.push(z);
		}
		else {
			st.push(Convert(v[i]));
		}
	}
	return st.front();
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<string> v;
		for (int i = 0; i < n; ++i) {
			string x; cin >> x;
			v.push_back(x);		
		}
		cout << solve(v) << "\n";
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

