#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n; string s;
int a[100] = {0}, b[100] = {0};

set<string> se;

void Try(int i) {
	for (int j = 1; j <= n; ++j) {
		if (!b[j]) {
			b[j] = 1;
			a[i] = j;
			if (i == n) {
				string tmp;
				for (int i = 1; i <= n; ++i) {
					tmp += (char)(s[a[i]-1]);
				}
				se.insert(tmp);
			}
			else Try(i+1);
			b[j] = 0;
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> s;
		n = s.size();
		
		Try(1);
		for (auto x : se) {
			string s = x;
			if (s[0] != '0')
				cout << s[0];
			for (int i = 1; i < s.size(); ++i) {
				cout << s[i];
			}
			cout << "\n";
		}
		se.clear();
		cout << "\n";
	}
	
	return (0^_^0);
}
