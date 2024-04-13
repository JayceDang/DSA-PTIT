#include <bits/stdc++.h>
#define _ 0
using namespace std;

bool check(int i, vector<int> v) {
    for (auto x : v) {
        if (x / i  == x / (i+1))
            return false;
    }
    return true;
}

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = v[0]; i >= 1; i--) {
        if (check(i, v)) {
            int res = 0;
            for (auto x : v) {
                res += x / (i+1) + 1;
            }
            cout << res << "\n"; 
            break;
        }
    }

    return (0^_^0);
}