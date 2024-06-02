#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool ok[100] = {false};
int n;
vector<string> v;
vector<string> tmp;
vector<vector<string>> res;

void Try(int i) {
	for (int j = 0; j < n; j++) 
	if (!ok[j]) {
		tmp.push_back(v[j]);
		ok[j] = true;
		if (i == n - 1) {
			res.push_back(tmp);
		}
		else Try(i + 1);
		ok[j] = false;
		tmp.pop_back();
	}
}

int main() {
	cin >> n;

	v.resize(n);

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	string last;
	cin >> last;

	for (int i = 0; i < n; i++) {
		if (last == v[i]) {
			ok[i] = true;
			break;
		}
	}
	
	Try(1);
	
	for (auto x : res) {
		for (auto i : x) cout << i << " ";
		cout << last << "\n";
	}
	
	return (0^_^0);
}
