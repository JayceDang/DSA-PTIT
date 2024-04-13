#include<bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        long long n, x; cin >> n >> x;
        long long a[n+1];

        long long idx = 0, res = 0;

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            if (a[i] <= x) {
                res = max(res, a[i]);
                idx = i;
            }
        }
        if (!idx)
            cout << "-1\n";
        else cout << idx << "\n";
    }

    return (0^_^0);
}