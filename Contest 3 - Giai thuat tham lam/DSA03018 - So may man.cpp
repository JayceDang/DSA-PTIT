#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        
        int x = n/7;
        bool ok = false;

        for (int i = x; i >= 0; i--) {
            if ((n - 7*i) % 4 == 0) {
                string a(i, '7');
                string b((n - 7*i)/4, '4');
                cout << b+a << "\n";
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << "-1\n";

    }

    return (0^_^0);
}