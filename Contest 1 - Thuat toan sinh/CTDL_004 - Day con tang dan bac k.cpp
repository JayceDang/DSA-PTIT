#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n;
int a[25];
vector<string> ans;

void Try(string s, int cntA, int cntB, int cntC) {
	if (s.size() <= n) {
			ans.push_back(s);
		if (s.size() == n)
			return;
	}
	Try(s + 'A', a[cntA + 1], a[cntB], a[cntC]);
	Try(s + 'B', a[cntA], a[cntB + 1], a[cntC]);
	Try(s + 'C', a[cntA], a[cntB], a[cntC + 1]);
}

bool cmp(string a, string b) {
	if (a.size() == b.size())
		return a <= b;
	return a.size() < b.size();
}

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	Try("", 0, 0, 0);
	sort(ans.begin(), ans.end(), cmp);
	for (auto x : ans)
		cout << x << "\n";

	return (0^_^0);
}
