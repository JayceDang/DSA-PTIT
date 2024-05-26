#include <bits/stdc++.h>
#define _ 0
using namespace std;

vector<string> v;

void RNL(int i) {
	if (i >= v.size())
		return;
	RNL(2*i+2);
	if (v[i] != "N")
		cout << v[i] << " ";
	RNL(2*i+1);
}

int main() {
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		string s; 
		getline(cin, s);
		
		stringstream ss(s);
		string tmp = "";
		while (ss >> tmp) {
			v.push_back(tmp);
		}
		
		RNL(0);

		v.clear();
		cout << "\n";
	}

	return (0^_^0);
}

