#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n, k; cin >> n >> k;
        int a[n+1];
        int idx = 1;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        
        for (int i = 1; i <= n; ++i) {
            if (a[i] == k) {
                idx = i; break;
            }             
        }
        cout << idx << "\n";
    }

    return 0;
}