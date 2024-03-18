#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		string ans = "";
	
		bool ok = false;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '0')
				continue;
			else ok = true;
		}
		if (!ok) {
			for (int i = 0; i < s.size(); ++i) {
				cout << "1";
			}
		}
		else {
			if (s[s.size()-1] == '1') {
			for (int i = 0; i < s.size()-1; ++i)
				ans += s[i];
				
				ans += "0";
			}
				
			else {
				int j = 0;
				for (int i = s.size()-1; i >= 0; i--) {
					if (s[i] == '0') {
						ans += "1";
					}
					else {
						ans += "0";
						j = i;
						break;
					}
				}
				for (int i = j-1; i >= 0; i--) {
					ans += s[i];
				}
				
				reverse(ans.begin(), ans.end());
			}
	
			cout << ans << "\n";
		}
		cout << "\n";
	}
	
	return (0^_^0);
}

