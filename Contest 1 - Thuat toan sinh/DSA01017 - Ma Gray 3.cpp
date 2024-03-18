#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		string ans = "";
		
		ans += s[0];
		
		for (int i = 1; i < s.size(); ++i) {
			if (s[i] != s[i-1])
				ans += "1";
			else ans += "0";
		}
		cout << ans << "\n";
	}
	
	return (0^_^0);
}
