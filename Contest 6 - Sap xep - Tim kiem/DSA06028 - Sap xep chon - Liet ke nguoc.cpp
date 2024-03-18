#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
		
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	vector<string> v;
	for (int i = 0; i < n-1; ++i) {
		int min_idx = i;
		for (int j = i+1; j < n; ++j) {
			if (a[j] < a[min_idx])
				min_idx = j;
		}
		string s = "";
		swap(a[i], a[min_idx]);
		s += "Buoc " + to_string(i+1) + ": ";
		for (int j = 0; j < n; ++j) {
			s += to_string(a[j])+ " ";
		}
		v.push_back(s);
	}
	
	for (int i = v.size()-1; i >= 0; i--)
		cout << v[i] << "\n";

	return (0^_^0);
}
