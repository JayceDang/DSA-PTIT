#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
    	int n; cin >> n;
    	int a[n], b[n], c[n];
    	stack<int> x, y;
    	
    	for (int i = 0; i < n; ++i) {
    		cin >> a[i];
		}
    	//Vi tri phan tu dau tien lon hon ben phai
    	for (int i = n-1; i >= 0; i--) {
    		while (!x.empty() && a[i] >= a[x.top()])
    			x.pop();
    		if (x.empty())
    			b[i] = -1;
    		else
    			b[i] = x.top();
    			
    		x.push(i);
		}
		
		//Vi tri phan tu dau tien nho hon ben phai
		for (int i = n-1; i >= 0; i--) {
			while (!y.empty() && a[i] <= a[y.top()])
				y.pop();
			if (y.empty())
				c[i] = -1;
			else
				c[i] = y.top();
				
			y.push(i);
		}
		
		for (int i = 0; i < n; ++i) {
			if (b[i] == -1 || c[b[i]] == -1)
				cout << -1 << " ";
			else
				cout << a[c[b[i]]] << " ";
		}
		
    	cout << "\n";
	}
    
    return 0;
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/

