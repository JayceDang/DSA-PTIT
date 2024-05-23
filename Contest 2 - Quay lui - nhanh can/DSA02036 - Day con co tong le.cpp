#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, a[100];
vector<int> v;
vector<string> ans;

void printArr() {
	string s = "";
	for (int i = 0; i < v.size(); ++i) {
		s += to_string(v[i]) + " ";
	}
	s.pop_back();
	ans.push_back(s);
}

void Try(int i, int sum) {
	if (sum % 2 == 1)
		printArr();
	if (i == n)	return;
	for (int j = i+1; j <= n; ++j) {
		v.push_back(a[j]);
		Try(j, sum+a[j]);
		v.pop_back();
	}
}

int main() {
	int T; cin >> T;
    while (T--) {
        cin >> n;
		
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		sort(a+1, a+n+1, greater<int>());
		
		Try(0, 0);
		sort(ans.begin(), ans.end());
		for (auto x : ans)
			cout << x << "\n";
		ans.clear();
        cout << "\n";
    }

	return (0^_^0);
}
