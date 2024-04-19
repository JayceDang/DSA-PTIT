#include <bits/stdc++.h>
#define _ 0
using namespace std;

int a[100], n;
vector<string> v;

bool cmp(string a, string b) {
	if (a.size() == b.size())
		return a < b;
	return a.size() < b.size();
}

void printArr() {
	string tmp = "";
	for (int i = 1; i <= n; ++i) {
		if (a[i]) {
			tmp += to_string(8);
		}
		else tmp += to_string(6);
	}
	v.push_back(tmp);
}

void Try(int i) {
	for (int j = 0; j <= 1; ++j) {
		a[i] = j;
		if (i == n) {
			printArr();
		}
		else Try(i+1);
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		v.clear();
		for (int i = n; i >= 1; i--) {
			n = i;
			memset(a, 0, sizeof a);
			Try(1);
		} 
		sort(v.begin(), v.end(), cmp);
		cout << v.size() << "\n";
		for (auto x : v)
			cout << x << " ";
		
		cout << "\n";		
	}
	
	return (0^_^0);
}

