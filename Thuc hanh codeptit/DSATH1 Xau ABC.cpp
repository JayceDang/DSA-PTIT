#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n;
vector<string> ans;

void Try(string s, int cntA, int cntB, int cntC) {
	if (s.size() <= n) {
		if (cntA && cntB && cntC && cntA <= cntB && cntB <= cntC)
			ans.push_back(s);
		if (s.size() == n)
			return;
	}
	Try(s + 'A', cntA + 1, cntB, cntC);
	Try(s + 'B', cntA, cntB + 1, cntC);
	Try(s + 'C', cntA, cntB, cntC + 1);
}

bool cmp(string a, string b) {
	if (a.size() == b.size())
		return a <= b;
	return a.size() < b.size();
}

int main() {
	cin >> n;

	Try("", 0, 0, 0);
	sort(ans.begin(), ans.end(), cmp);
	for (auto x : ans)
		cout << x << "\n";

	return (0^_^0);
}

