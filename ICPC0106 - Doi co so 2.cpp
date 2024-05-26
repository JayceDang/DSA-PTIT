#include <bits/stdc++.h>
#define _ 0
using namespace std;

long long BinarytoDec(string s) {
	long long ans = 0;
	int k = s.size()-1;
	for (int i = 0; i < s.size(); ++i) {
		ans += (s[i]-'0') * pow(2, k);
		k--;
	}
	return ans;
}

void Convert(string s, int k) {
	vector<string> v;
	string tmp = "";
	for (int i = s.size()-1; i >= 0; i--) {
		tmp += s[i];
		if (tmp.size() == k) {
			reverse(tmp.begin(), tmp.end());
			v.push_back(tmp); tmp = "";
		}
	}
	if (tmp != "") {
		reverse(tmp.begin(), tmp.end());
		v.push_back(tmp);
	}
		
	
	for (int i = v.size()-1; i >= 0; i--) {
		if (BinarytoDec(v[i]) )
		cout << BinarytoDec(v[i]);
	}
		
	cout << "\n";
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int cnt = 0;
		while (n) {
			n /= 2;
			++cnt;
		}	
		string s; cin >> s;
		Convert(s, cnt-1);	
	}

	return (0^_^0);
}

