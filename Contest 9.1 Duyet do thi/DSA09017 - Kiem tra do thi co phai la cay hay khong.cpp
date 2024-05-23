#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		
		set<int> s;
		for (int i = 0; i < n-1; ++i) {
			int x, y; cin >> x >> y;
			s.insert(x);
			s.insert(y);
		}
		if (s.size() != n)
			cout << "NO\n";
		else
			cout << "YES\n";
	}


	return (0^_^0);
}

