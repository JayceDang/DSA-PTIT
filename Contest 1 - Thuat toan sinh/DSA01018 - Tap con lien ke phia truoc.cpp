#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;	
	while (T--) {
		int n, k; cin >> n >> k;
		vector<int> M(k); 
		for (int i = 0; i < k; ++i) 
			cin >> M[i];
		string s = string(n, '1');

		for (int i = 0; i < k; ++i) {
			s[M[i] - 1] = '0';
		}
	
		prev_permutation(s.begin(), s.end());
		
		for (int i = 0; i < n; ++i) {
			if (s[i] == '0')
				cout << i + 1 << " ";
		}		
		cout << "\n";
	}

	return (0^_^0);
}
