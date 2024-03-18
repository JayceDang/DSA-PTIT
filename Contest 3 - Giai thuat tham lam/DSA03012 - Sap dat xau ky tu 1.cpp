#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		map<char, int> mci;
		
		for (int i = 0; i < s.size(); ++i) {
			mci[s[i]]++;
		}
		int ans = 1;
		for (auto x : mci) {
			if (x.second*2 -1 > s.size()) {
				ans = -1;
			}
			if (ans == -1)
				break;
		}
		cout << ans << "\n";
	}

	return (0^_^0);
}

