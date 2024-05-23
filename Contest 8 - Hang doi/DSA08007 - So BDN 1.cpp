#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	vector<long long> v;
	v.push_back(1);
	long long tmp = 1;
	while (tmp <= 100000000000000000) {
		tmp *= 10;
		v.push_back(tmp);
		int size = v.size()-1;
		for (int i = 0; i < size; ++i) {
			v.push_back(tmp + v[i]);
			cout << tmp << " " << v[i] << "\n";
		}
	}
	
	int T; cin >> T;
	while (T--) {
		long long n; cin >> n;
		long long ans = 0;
		for (int i = 0; i < v.size(); ++i) {
			if (v[i] <= n) {
				++ans;
			}
			else break;
		}
		
		cout << ans << "\n";
	}

	return (0^_^0);
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/

