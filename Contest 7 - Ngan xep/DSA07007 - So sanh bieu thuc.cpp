#include <bits/stdc++.h>
#define _ 0
using namespace std;

string solve(string& s){
	int a[100], k = -1;
	string s1;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == '(') {
			k++;
			if(i == 0 || s[i-1] == '+') {
				a[k] = 1;
				continue;
			}
			a[k] = 0;
			continue;
		}
		if(s[i] == ')'){
			k--;
			continue;
		}
		if(k >= 0){
			if((s[i] == '+' && a[k] == 1) || (s[i] == '-' && a[k] == 0)) {
				s[i] = '+';
				s1 += s[i];
				continue;
			}
			if((s[i] == '+' && a[k] == 0) || (s[i] == '-' && a[k] == 1)) {
				s[i] = '-';
				s1 += s[i];
				continue;
			}
		}
		s1 += s[i];
	}
	string tmp = "";
	for(int i = 0; i < s1.size(); ++i){
		if((s1[i] == '-' && s1[i+1] == '+') || (s1[i] == '+' && s1[i+1] == '-')) {
			if(i == 0) i++;
			continue;
		}
		tmp += s1[i];
	}
	return tmp;
}

int main() {
	int T; cin >> T;
	while (T--) {
		string s, w; cin >> s >> w;		
		if (solve(s) == w)
			cout << "YES\n";
		else
			cout << "NO\n";	
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

