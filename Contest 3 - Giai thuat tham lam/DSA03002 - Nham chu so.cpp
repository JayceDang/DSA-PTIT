#include <bits/stdc++.h>
#define _ 0
using namespace std;

long long Swap_Max(string a, string b) {
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] == '5')
			a[i] = '6';
	}
	for (int i = 0; i < b.size(); ++i) {
		if (b[i] == '5')
			b[i] = '6';
	}
	
	return stoll(a) + stoll(b);
}

long long Swap_Min(string a, string b) {
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] == '6')
			a[i] = '5';
	}
	for (int i = 0; i < b.size(); ++i) {
		if (b[i] == '6')
			b[i] = '5';
	}
	
	return stoll(a) + stoll(b);
}

int main() {
	int T = 1;
	while (T--) {
		string a, b; cin >> a >> b;
		cout << Swap_Min(a, b) << " " << Swap_Max(a, b) << "\n";
	}

	return (0^_^0);
}
