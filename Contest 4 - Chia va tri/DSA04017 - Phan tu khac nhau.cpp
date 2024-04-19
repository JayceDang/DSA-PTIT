#include<bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        long long a[n+1], b[n+1];
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        int idx = 0;
        bool check = false;
        for (int i = 1; i <= n-1; ++i) {
            cin >> b[i];
            if (check == false) {
                if (b[i] != a[i]) {
                    idx = i; check = true;
                }
            }
        }
        cout << idx << "\n";
    }

    return (0^_^0);
}