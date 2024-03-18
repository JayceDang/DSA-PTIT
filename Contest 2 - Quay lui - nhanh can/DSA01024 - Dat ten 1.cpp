#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, a[100], k;
vector<string> b;

vector<vector<string>> ans;

void output() {
	vector<string> x;
	
	for (int i = 1; i <= k; ++i) {
		x.push_back(b[a[i]]);
	}
	ans.push_back(x);
}

void Try(int i) {
	for (int j = a[i-1] + 1; j <= n-k+i; ++j) {
		a[i] = j;
		if (i == k) {
			output();
		}
		else
			Try(i+1);
	}
}

int main() {
	cin >> n >> k;
	
	set<string> s;
	
	for (int i = 1; i <= n; ++i) {
		string x; cin >> x;
		s.insert(x);		
	}
	
	b.push_back("");
	for (auto x : s) {
		b.push_back(x);
	}
	
	n = s.size();
	
	Try(1);
	
	for (auto i : ans) {
		for (string j : i) {
			cout << j << " ";
		}
		cout << "\n";
	}

	return (0^_^0);
}
