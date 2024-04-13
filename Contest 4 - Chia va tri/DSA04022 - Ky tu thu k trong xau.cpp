#include<bits/stdc++.h>
#define _ 0
using namespace std;

long long mul(long long a, long long b) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    long long tmp = mul(a, b/2);
    if (b & 1)
        return tmp*tmp*a;
    return tmp*tmp;
}

char Find(long long n, long long k) {
    long long x = mul(2, n-1);

    if (k == x) return n + 'A' - 1;
    else if (k < x)
        return Find(n-1, k);
    return Find(n-1, k-x);
}

int main() {
    int T; cin >> T;
    while (T--) {
        long long n, k; cin >> n >> k;

        cout << Find(n, k) << "\n";

    }

    return (0^_^0);
}