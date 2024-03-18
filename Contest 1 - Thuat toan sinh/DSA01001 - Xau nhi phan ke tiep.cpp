#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		
		string ans = s;
		int idx = 0;
		bool ok = false;
		
		for (int i = s.size()-1; i >= 0; i--) {			
			if (s[i] == '0') {
				ans[i] = '1';
				ok = true;
				idx = i;
			}
			if (ok == true)
				break;	
		}
		
		if (ok == true) {
			for (int j = idx+1; j < ans.size(); ++j)
				ans[j] = '0';
		}		
		else {
			for (int j = 0; j < ans.size(); ++j)
				ans[j] = '0';
		}	
		cout << ans << "\n";	
	}

	return (0^_^0);
}

/*
vd: 1010111 | index = [0,1,2,3,4,5,6]
ans = s, idx = 0
for (cuoi day -> dau day) 
	if s[i] = 0, ans[i] = 1, idx = i = 3
		=> ans = 1011|111
		for (idx+1 -> cuoi day) s[i] = 0
	else memset('0', ans, sizeof(ans))
*/
