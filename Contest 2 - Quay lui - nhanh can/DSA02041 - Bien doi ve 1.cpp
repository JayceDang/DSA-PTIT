#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, cnt;
void Try(int n) {
	if (n == 1)
		return;
	if (n % 3 == 0) {
		++cnt;
		Try(n/3);
	}
	else if (n % 2 == 0) {
		++cnt;
		Try(n/2);
	}
	else {
		++cnt;
		Try(n-1);
	}	
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n;
		cnt = 0;
		Try(n);
		cout << cnt << "\n";
	}

	return (0^_^0);
}
