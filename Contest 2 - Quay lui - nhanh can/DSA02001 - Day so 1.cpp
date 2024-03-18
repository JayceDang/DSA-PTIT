#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
        	cin >> a[i];
		}

		if (n == 1)
			cout << "[" << a[0] << "]\n";
		else {
			int cnt = n;
			for (int i = 0; i < n; ++i) {
				if (i == 0)
					cout << "[" << a[i] << " ";
				else if (i == n-1)
					cout << a[i] << "]\n";
				else cout << a[i] << " ";
			}
			while (cnt > 1) {
				cout << "[";
				for (int i = 0; i < cnt-1; ++i) {
					cout << a[i] + a[i+1];
					if (i != cnt-2) {
						cout << " ";
					}
					a[i] = a[i]+a[i+1];
				}
				cout << "]\n";
				cnt--;
			}
			cout << "\n";
		}
    }

    return (0^_^0);
}
