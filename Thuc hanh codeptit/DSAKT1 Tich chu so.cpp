#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }
        stack<int> st;
        for (int i = 9; i >= 2; i--) {
            while (n % i == 0) {
                st.push(i);
                n /= i;
            }
        }   
        if (n > 1)
            cout << -1 << "\n";
        else {
            while (st.size()) {
                cout << st.top();
                st.pop();
            }
            cout << "\n";
        }
    }
    return (0^_^0);
}
