#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool check(vector<int> v) {
	for (int i = 1; i < v.size(); ++i) {
		if (abs(v[i] - v[i-1]) == 1)
			return 0;
	}
	return 1;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		
		vector<int> v(n);
		iota(v.begin(), v.end(), 1);
		
		do {
			if (check(v)) {
				for (auto x : v)
					cout << x;
				cout << "\n";
			}
		}	
		while (next_permutation(v.begin(), v.end()));
	}

	return (0^_^0);
}
