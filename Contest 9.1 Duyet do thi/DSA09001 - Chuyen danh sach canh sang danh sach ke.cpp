#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int V, E;
        cin >> V >> E;
        
        int a[V+1][V+1] = {0};
        
        for (int i = 1; i <= E; ++i) {
        	int x, y; cin >> x >> y;
        	a[x][y] = a[y][x] = 1;
		}
        
        for (int i = 1; i <= V; ++i) {
        	cout << i << ": ";
        	for (int j = 1; j <= V; ++j) {
        		if (a[i][j])
        			cout << j  << " ";
			}
			cout << "\n";
		}
        
        cout << "\n";
    }
 
    return (0^_^0);
}
