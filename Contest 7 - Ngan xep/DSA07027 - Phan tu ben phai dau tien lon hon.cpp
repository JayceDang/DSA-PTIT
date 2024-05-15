#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int T; cin >> T;
    while (T--) {
	    int n; cin >> n;
	    long long a[n], b[n];
	    for (int i = 0; i < n; ++i){
	        cin >> a[i];
	    }
	    stack<long long> st;
	    for (int i = n-1; i >= 0; i--){
	        while (!st.empty() && a[i] >= st.top()){
	            st.pop();
	        }
	        if(st.empty()){
	            b[i] = -1;
	        }
	        else {
	            b[i] = st.top();
	        }
	        st.push(a[i]);
	    }
	    for (auto x : b)
	       cout << x << " ";
	    cout << "\n";
    }

	return (0^_^0);
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/
