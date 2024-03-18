#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, cnt = 1, a[100];
bool used[100];

map<string, int> mp;

void printArr() {
	string x = "";
	for (int i = 1; i <= n; ++i) {
		x += to_string(a[i]);
	}
	mp[x] = cnt++;
}

void Try(int i) {
	for (int j = 1; j <= n; ++j) {
		if (!used[j]) {
			a[i] = j;
			used[j] = true;
			if (i == n)
				printArr();
			else
				Try(i+1);
				used[j] = false;
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		cnt = 1;
		mp.clear();
		memset(used, false, sizeof used);
		string temp = "";
		
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			temp += to_string(a[i]);
		}
		
		Try(1);
		
		cout << mp[temp] << "\n";
	}

	return (0^_^0);
}
