#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;	
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	
	do {
		for (int i = 0; i < v.size(); ++i) {
			cout << v[i] << " ";
		}
		cout << "\n";
	} while (next_permutation(v.begin(), v.end()));

	return (0^_^0);
}
