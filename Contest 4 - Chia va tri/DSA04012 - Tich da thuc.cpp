#include<bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        vector<int> res(m+n-1, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                res[i+j] += a[i]*b[j];
            }
        }

        for (auto x : res)
            cout << x << " ";
        cout << "\n";
	}

    return (0^_^0);
}