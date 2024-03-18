#include <bits/stdc++.h>
#define _ 0
using namespace std;

string Convert(string s) {
	string ans = "";
	ans = s[0];
	for (int i = 1; i < s.size(); ++i) {
		int n = ans.size()-1;
		if (ans[n] != s[i])
			ans += "1";
		else ans += "0";
	}
	return ans;
}

int main() {
	int T; cin >> T;
	while (T--) {
		string s;
		cin >> s;		
		cout << Convert(s) << "\n";
	}

	return (0^_^0);
}
