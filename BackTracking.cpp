#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, k, s, sum, ans;
int a[100];
bool used[100], check;
vector<string> v;
string w;
set<string> se;

bool cmp(string& a, string& b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	return a.size() < b.size();
}

void output_1() {
	for (int i = 1; i <= n; ++i) {
		if (a[i]) {
			cout << v[a[i]];
		}
	}
	cout << "\n";
}

void output_2() {
	if (v[a[n]] == w) {
		for (int i = 1; i <= n; ++i) {
			cout << v[a[i]] << " ";
		}
		cout << "\n";	
	}
}

void output_3() {
	for (int i = 1; i <= k; ++i) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

void Try(string s, int demA, int demB, int demC) {
	if (s.size() <= n) {
		if (demA && demB && demC && (demA <= demB) && (demB <= demC)) {
				v.push_back(s);					
		}	
		if (s.size() == n) return;
	}
	Try(s+"A", demA+1, demB, demC);
	Try(s+"B", demA, demB+1, demC);
	Try(s+"C", demA, demB, demC+1);
}

void Try_1(int i) {
	for (int j = 0; j <= 1; ++j) {
		a[i] = j;
		if (i == n) {
			output_1();
		}
		else {
			Try_1(i+1);
		}
	}
}

void Try_2(int i) {
	for (int j = 1; j <= n; ++j) {
		if (!used[j]) {
			a[i] = j;
			used[j] = true;
			if (i == n) {
				output_2();
			}
			else 
				Try_2(i+1);
				used[j] = false;
		}
	}
}

void Try_3(int i) {
	for (int j = a[i-1]+1; j <= n-k+i; ++j) {
		a[i] = j;
		if (i == k) {
			output_3();
		}
		else {
			Try_3(i+1);
		}
	}
}

void out() {
	for (int i = 1; i <= n; ++i) {
		if (used[i]) {
			cout << a[i] << " ";
		}
	}
	cout << "\n";
}

void Try(int i, int x) {
	for (int j = x; j <= n; ++j) {
		sum += a[j];
		used[j] = true;
		if (sum <= s) {
			if (sum == s) {
				out();
				check = true;
				ans = min(ans, i);
			}
			else
				Try(i+1, j+1);
		}
		sum -= a[j];
		used[j] = false;
	}
}

int main() {	
	cin >> n;
	v.push_back("");
	for (int i = 1; i <= n; ++i) {
		string s; cin >> s;
		v.push_back(s);
	}
	
	Try_1(1);

	return (0^_^0);
}
