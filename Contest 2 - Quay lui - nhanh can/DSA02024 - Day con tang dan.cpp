#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n; 
int a[25];
int cnt = 0;
vector<int> res;
vector<vector<int>> v;
vector<string> ans;

void Try(int i) {
	for (int j = i+1; j <= n; ++j) {
		
		if (a[j] > a[i]) {
			res.push_back(a[j]);
			
			if (res.size() > 1)
				v.push_back(res);

			Try(j);
				res.pop_back();
		}
	}
}

int main() {
	cin >> n;
	a[0] = 0;
	for (int i = 1; i <= n; ++i) 
		cin >> a[i];

	Try(0);

	for (int i = 0; i < v.size(); ++i) {
		string tmp = "";
		for (int j = 0; j < v[i].size(); ++j) {
			tmp += to_string(v[i][j]) + " ";
		}
		ans.push_back(tmp);
	}
	
	sort(ans.begin(), ans.end());
	for (auto x : ans) 
		cout << x << "\n";
	
	return (0^_^0);
}

