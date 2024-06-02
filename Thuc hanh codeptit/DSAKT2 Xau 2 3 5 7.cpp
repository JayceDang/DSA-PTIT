#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> v;

bool cmp(string& a, string& b) {
	if (a.size() == b.size())
		return a < b;
	return a.size() < b.size();
}

void Try(string s, int cnt2, int cnt3, int cnt5, int cnt7) {
	if (s.size() <= n) {
		if (cnt2 && cnt3 && cnt5 && cnt7 && s[s.size()-1] != '2') {
			v.push_back(s);
		}
		if (s.size() == n)
			return;
	}
	Try(s+'2', cnt2+1, cnt3, cnt5, cnt7);
	Try(s+'3', cnt2, cnt3+1, cnt5, cnt7);
	Try(s+'5', cnt2, cnt3, cnt5+1, cnt7);
	Try(s+'7', cnt2, cnt3, cnt5, cnt7+1);
}

int main() {
	cin >> n;
	
	Try("", 0, 0, 0, 0);
	sort(v.begin(), v.end(), cmp);
	for (auto x : v)
		cout << x << "\n";
	
	return 0;
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/
