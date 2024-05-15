#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        long long n; cin >> n;
        long long a[n+1], b[n+1];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        long long cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[0]) {
                ++cnt;
            }
            else break;
        }

        cout << cnt << "\n";
    }

    return 0;
}