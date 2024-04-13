#include <bits/stdc++.h>
#define _ 0
using namespace std;

char c;

bool check(vector<char> v, int n) {
	for (int i = 1; i < n-1; ++i) {
		if (v[i] == 'A' || v[i] == 'E') {
			if (v[i - 1] != 'A' && v[i - 1] != 'E' && v[i + 1] != 'A' && v[i + 1] != 'E')
				return false;
		}
	}
	return true;
}

int main() {
	cin >> c;
	vector<char> v(c - 'A' + 1);
	
	//iota(l, r, i) : Gan cho vector trong doan [l;r] cac phan tu tang dan tinh tu i
	iota(v.begin(), v.end(), 'A');
	
	do {
		if (check(v, v.size())) {
			for (auto x : v)
				cout << x;
			cout << "\n";
		}
	}
	while (next_permutation(v.begin(), v.end()));
		
	return (0^_^0);
}
