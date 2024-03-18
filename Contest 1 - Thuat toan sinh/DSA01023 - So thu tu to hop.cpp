#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, k, cnt = 1, a[100], b[100];

map<string, int> mp;

void printArr() {
	string x = "";
	for (int i = 1; i <= k; ++i) {
		x += to_string(a[i]);
	}
	mp[x] = cnt++;
}

void Try(int i) {
	for (int j = a[i-1] + 1; j <= n-k+i; ++j) {
		a[i] = j;
		if (i == k)
			printArr();
		else
			Try(i+1);
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> k;
		cnt = 1;
		mp.clear();
		
		string temp = "";
		
		for (int i = 1; i <= k; ++i) {
			cin >> a[i];
			temp += to_string(a[i]);
		}
		
		Try(1);
		
		cout << mp[temp] << "\n";
	}

	return (0^_^0);
}
