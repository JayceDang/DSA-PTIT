#include <bits/stdc++.h>
#define _ 0
using namespace std;

long long solve(vector<long long>& v) {
    stack<long long> st;
    v.push_back(0);
    long long maxArea = 0;
    
    for (int i = 0; i < v.size(); ++i) {
        while (!st.empty() && v[i] < v[st.top()]) {
            long long height = v[st.top()]; st.pop();
            long long width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    
    return maxArea;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;	
		vector<long long> a(n);
		
		for (int i = 0; i < n; ++i){
			cin >> a[i];
		}
		
		cout << solve(a) << "\n";
		
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

