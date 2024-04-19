#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a[n+1], b[n+1];
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            b[y].push_back(x);
        }
        int c = 1; 
        for(int i = 1; i <= n; ++i) { 
            if(a[i].size()!= b[i].size()){
                c=0; break; 
            } 
        } 
        cout << (c == 1 ? 1 : 0) << "\n";
    }
    return (0^_^0);
}