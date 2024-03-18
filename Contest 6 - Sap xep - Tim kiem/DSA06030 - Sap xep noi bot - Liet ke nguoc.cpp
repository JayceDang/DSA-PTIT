#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T; 
	while (T--) {
		int n; cin >> n;
		int a[n];
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		vector<string> v;
		for (int i = 0; i < n; ++i) {
			bool check = true;
			for (int j = 0; j < n-1; ++j) {
				if (a[j] > a[j+1]) {
					swap(a[j], a[j+1]);
					check = false;
				}
			}
			string s = "";
			if (check) break;	
			s += "Buoc " + to_string(i+1) +": ";
			for (int j = 0; j < n; ++j) {
				s += to_string(a[j]) + " ";
			}
			v.push_back(s);
		}
		for (int i = v.size()-1; i >= 0; i--)
			cout << v[i] << "\n";
		cout << "\n";
	}
	
	return (0^_^0);
}
