#include<bits/stdc++.h>
#define _ 0
using namespace std;

int n;
int a[100];
vector<int> cmp;
map<int, bool> mp;

int sum (int x) {
    int res = 0;
    while (x > 0) {
        res += x%10;
        x /= 10;
    }
    return res;
}

void printArr() {
    int x = 0;
    for (int i = 1; i <= n; ++i) {
        if (!a[i])
            x = x*10 + 4;
        else x = x*10 + 7;
    }
    cmp.push_back(x);
    cout << x << " ";
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        a[i] = j;
        if (i == n) {
            printArr();
        }
        else 
            Try(i+1);
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        cin >> n;
        Try(1);

        for (auto x : cmp) {
            mp[sum(x)] = true;
        }

        if (!mp[n])
            cout << "-1";
        else 
            cout << "x";
        cout << "\n";
    }

    return (0^_^0);
}
