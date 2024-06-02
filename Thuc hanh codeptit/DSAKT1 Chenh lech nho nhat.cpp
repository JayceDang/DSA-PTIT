#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool ok[100];
vector<string> s;
int n, k, a[100];
int ans = INT_MAX;

void res() {
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		string res = "";
		for (int j = 1; j <= k; ++j) {
			res += s[i][a[j] - 1];
		}		
		v.push_back(stoi(res));
	}
	sort(v.begin(), v.end());
	
	ans = min(ans, v[n-1]-v[0]);
}

void Try(int i) {
	for (int j = 1; j <= k; ++j) 
	if (!ok[j]) {
		a[i] = j;
		ok[j] = true;
		if (i == k) {
			res();
		}
		else Try(i + 1);
		ok[j] = false;
	}
}

int main() {
	cin >> n >> k;
	
	s.resize(n);
	
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
	}
	
	Try(1);

	cout << ans;

	return (0^_^0);
}
