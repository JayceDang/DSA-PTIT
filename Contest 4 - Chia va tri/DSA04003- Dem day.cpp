#include<bits/stdc++.h>
#define _ 0
using namespace std;

map<long long, long long> mp;
const int mod = 123456789;

long long dem(long long n) {
    if (mp[n])
        return mp[n];
    if (n == 1)
        return mp[n] = 1;
    
    long long temp = dem(n/2) % mod;
    if (n & 1)
        return mp[n] = (temp*temp*4)%mod;
    return mp[n] = (temp*temp*2)%mod;
}

int main() {
    int T; cin >> T;
    while (T--) {
        long long n; cin >> n;

        cout << dem(n) << "\n";

    }

    return (0^_^0);
}