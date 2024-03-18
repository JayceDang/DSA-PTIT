#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, k;
vector<int> a, b;
vector<vector<int>> res;

void output() {
	int sum = 0;
	for (int i = 0; i < n; ++i) 
		if (a[i])
			sum += b[i];			
	if (sum == k)
		res.push_back(a);
}

void Try(int i) {
	for (int j = 0; j <= 1; ++j) {
		a[i] = j;
		if (i == n-1)
			output();
		else
			Try(i+1);
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> k;	
		
		for (auto x : a)
			a.clear();
		for (auto x : b)
			a.clear();
		for (auto x : res)
			res.clear();
			
		a.resize(n, 0);
		b.resize(n, 0);
		
		for (int i = 0; i < n; ++i) {
			cin >> b[i];
		}
		sort(b.begin(), b.end());
		Try(0);
	
		vector<string> output;
	
		for (int i = 0; i < res.size(); ++i) {
			string tmp = "";
			for (int j = 0; j < res[i].size(); ++j) {
				if (res[i][j])
					//cout << b[j] << " ";
					tmp += to_string(b[j]) + " ";
			}
			tmp.pop_back();
			output.push_back(tmp);
			//cout << "\n";
		}
		
		if (!output.size())
			cout << "-1\n";
		else
			for (int i = output.size()-1; i >= 0; i--) {
				cout << "[" << output[i] << "]";
				cout << " ";
			}
		cout << "\n";
	}
	
	return (0^_^0);
}

