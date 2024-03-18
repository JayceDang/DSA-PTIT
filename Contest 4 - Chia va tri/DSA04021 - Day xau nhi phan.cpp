#include <bits/stdc++.h>
#define _ 0
using namespace std;

long long F[100];

char String_Bina(long long n, long long F[], long long i) {
    if (n == 1) return '0';
    if (n == 2) return '1';
    if (i <= F[n-2])
        return String_Bina(n-2, F, i);
    return String_Bina(n-1, F, i-F[n-2]);
}

void Fibo() {
    F[1] = F[2] = 1;
    for (int i = 3; i < 93; ++i) {
        F[i] = F[i-2] + F[i-1];
    }
}

int main() {
    int T; cin >> T;
    Fibo();
    while (T--) {
        long long n, i; cin >> n >> i;
        cout << String_Bina(n, F, i) << "\n";
    }

    return 0;
}
