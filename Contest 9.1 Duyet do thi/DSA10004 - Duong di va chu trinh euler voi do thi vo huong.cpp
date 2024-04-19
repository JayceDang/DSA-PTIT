#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v[n + 1];
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int dem = 0;
        int dem1 = 0;
        for (int i = 1; i <= n; ++i) {
            if (v[i].size() && v[i].size() % 2 == 0) {
                dem++;
            }
            else if (v[i].size() && v[i].size() % 2 == 1) {
                dem1++;
            }
        }
        if (dem == n) {
            cout << 2;
        }
        else if (dem1 == 2) {
            cout << 1;
        }
        else
            cout << 0;
        cout << "\n";
    }
    return (0^_^0);
}