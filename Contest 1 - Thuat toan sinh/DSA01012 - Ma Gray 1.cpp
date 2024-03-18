#include <bits/stdc++.h>
#define _ 0
using namespace std;

vector<string> Sinh(int n) {
	vector<string> Gray;
	if (n == 1) {	
		Gray.push_back("0");
		Gray.push_back("1");
		return Gray;
	}
	vector<string> prevGray = Sinh(n-1);
	for (int i = 0; i < prevGray.size(); ++i) {
		Gray.push_back("0" + prevGray[i]);
	}
	for (int i = prevGray.size()-1; i >= 0; i--) {
		Gray.push_back("1" + prevGray[i]);
	}
	return Gray;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<string> Gray = Sinh(n);
		for (int i = 0; i < Gray.size(); ++i) {
			cout << Gray[i] << " ";
		}		
		cout << "\n";
	}

	return (0^_^0);
}
/*
n = 1 -> 0 1
Next = Gray(n-1)
for ... Next[i] = "0" + Next[i]
for ... Next[i] = "1" + Next[i]
*/
