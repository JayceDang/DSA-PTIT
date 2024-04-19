#include<bits/stdc++.h>
#define _ 0
using namespace std;

long long toHex(string s) {
    long long res = 0;
    int idx = s.size()-1;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '0') {
            res += pow(2, idx);
        }
        idx--;
    }
    return res;
}

int main() {
    int T; cin >> T;
    while (T--) {
        string a, b; cin >> a >> b;
        cout << toHex(a) * toHex(b) << "\n";
	}

    return (0^_^0);
}