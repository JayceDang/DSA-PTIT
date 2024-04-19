#include<bits/stdc++.h>
#define _ 0
using namespace std;

long long hex(int x, int k) {
    long long sum = 0;
    string s = to_string(x);
    for (int i = 0; i < s.size(); ++i) {
        sum = sum*k + s[i]-'0';
    }
    return sum;
}

int main() {
    int T; cin >> T;
    while (T--) {
        int k; long long a, b;
        cin >> k >> a >> b;

        long long x = hex(a, k) + hex(b, k);
        string ans = "";
        while (x) {
            ans = to_string(x % k) + ans;
            x /= k;
        }
        cout << ans << "\n";
    }

    return (0^_^0);
}