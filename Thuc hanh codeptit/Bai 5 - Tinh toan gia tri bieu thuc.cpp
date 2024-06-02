#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool priority(string c) {
	return (c == "+" || c == "-" || c == "*" || c == "/" || c == "^" || c == "%") ? 1 : 0;
}

long long Tinh(string s) {
	long long ans = 0;
	if (s[0] == '-') {
		for (int i = 1; i < s.size(); ++i) {
			ans = ans*10 + s[i]-'0';
		}
		ans *= -1;
	}
	else {
		for (int i = 0; i < s.size(); ++i) {
			ans = ans*10 + s[i]-'0';
		}
	}
	return ans;
}

long long solve_1(vector<string> v) {
	stack<long long> st;
	for (int i = v.size()-1; i >= 0; i--) {
		if (priority(v[i])) {
			long long x = st.top(); st.pop();
			long long y = st.top(); st.pop();
			long long z;	
			if (v[i] == "+") z = x+y;
            else if (v[i] == "-") z = x-y;
            else if (v[i] == "*") z = x*y;
            else if (v[i] == "/") z = x/y;
            else if (v[i] == "^") z = x^y;
            else if (v[i] == "%") z = x%y;
            st.push(z);
		}
		else {
			st.push(Tinh(v[i]));
		}
	}
	return st.top();
}

long long solve_2(vector<string> v) {
	stack<long long> st;
	for (int i = 0; i < v.size(); ++i) {
		if (priority(v[i])) {
			long long x = st.top(); st.pop();
			long long y = st.top(); st.pop();
			long long z;	
			if (v[i] == "+") z = x+y;
            else if (v[i] == "-") z = y-x;
            else if (v[i] == "*") z = x*y;
            else if (v[i] == "/") z = y/x;
            else if (v[i] == "^") z = y^x;
            else if (v[i] == "%") z = y%x;
            st.push(z);
		}
		else {
			st.push(Tinh(v[i]));
		}
	}
	return st.top();
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
		cout << (priority(v[0]) ? solve_1(v) : solve_2(v)) << "\n";
	}

	return (0^_^0);
}
