#include<bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            mp[a[i]] = 2*a[i];
        }
        sort(a, a+n);
        int i = 0;
		int j = n / 2;

		int cnt = n;

		while (i < n && j < n) {
			if (a[i] * 2 <= a[j]) {
				cnt--;
				i++;
				j++;
			}
			else j++;
		}
        cout << cnt << "\n";
	}

    return (0^_^0);
}