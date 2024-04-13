#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main(){
	int T; cin >> T;
	while (T--) {
		int n; string s;
		cin >> n >> s;
		vector<int> v;
		for (auto x : s) {
			v.push_back(x-'0');
		}
		
		string tmp = "", ans = "";
		next_permutation(v.begin(), v.end());
		for (auto x : v) {
			ans += to_string(x);
		}
		
		sort(v.begin(), v.end());
		for (auto x : v) {
			tmp += to_string(x);
		}
		cout << n << " ";
		if (ans == tmp)
			cout << "BIGGEST";
		else 
			cout << ans;
		cout << "\n";
	}
	
	return (0^_^0);	
}
