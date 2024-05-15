#include <bits/stdc++.h>
#define _ 0
using namespace std;

string PTIT_Chill(int n) {
	queue<string> q;
	q.push("9");
	while (q.size() > 0) {
		string res = q.front(); q.pop();
		long long tmp = 0;
		for (int i = 0; i < res.size(); ++i) {
			tmp = 10*tmp + (int)(res[i]-'0');
			tmp %= n;
		}
		if (tmp == 0)
			return res;
		q.push(res + "0");
		q.push(res + "9");
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		cout << PTIT_Chill(n);
		cout << "\n";
	}

	return (0^_^0);
}
