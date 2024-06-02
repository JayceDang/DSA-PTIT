#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		int cnt1 = 0, cnt2 = 0;
		string tmp = "";
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == '(') {
				++cnt1;
			}
			if (s[i] == ')') {
				++cnt2;
			}
		}		
//		cout << cnt1 << " " << cnt2 << "\n";
		if (cnt1 == cnt2) {
			for (int i = 0; i < s.size(); ++i) {
				if (s[i] == '(') {
					tmp += "0";
				}
				else if (s[i] == ')') {
					tmp += "1";
				}
				else tmp += s[i];
			}
		}
		else if (cnt1 > cnt2) {
			int x = cnt1 - cnt2;
			for (int i = 0; i < x; ++i) {
				if (s[i] == '(')
					tmp += "-1"; 
			}
			for (int i = x; i < s.size(); ++i) {
				if (s[i] == '(') {
					tmp += "0";
				}
				else if (s[i] == ')') {
					tmp += "1";
				}
				else tmp += s[i];
			}
		}
		else {
			int x = cnt2 - cnt1;
			for (int i = 0; i < s.size()-x; ++i) {
				if (s[i] == '(') {
					tmp += "0";
				}
				else if (s[i] == ')') {
					tmp += "1";
				}
				else tmp += s[i];
			}
			for (int i = s.size()-x; i < s.size(); ++i) {
				tmp += "-1";
			}
		}
		cout << tmp << "\n";
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

