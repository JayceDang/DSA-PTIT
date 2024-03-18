#include <bits/stdc++.h>
#define _ 0
using namespace std;

int a[100];
bool visited[100];
string s; 

void output() {
	for (int k = 1; k <= s.size(); ++k) {
		cout << s[a[k]];
	}
	cout << " ";
}

void Try(int i) {
	for (int j = 0; j < s.size(); ++j) {
		if (!visited[j]) {
			a[i] = j;
			visited[j] = true;
			if (i == s.size()) {
				output();
			}
			else Try(i+1);
			visited[j] = false;
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> s;
		sort(s.begin(), s.end());
		memset(visited, false, sizeof(visited));
		
		Try(1);
		cout << "\n";
			
	}

	return (0^_^0);
}
