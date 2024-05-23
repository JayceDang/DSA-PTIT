#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        int cnt = 0;
        
        while (s.size()) {
        	int x = s.find("()");
        	if (x == -1) {
        		if (s[0] == ')') {
        			s[0] = '('; ++cnt;
				}
				if (s[s.size()-1] == '(') {
					s[s.size()-1] = ')'; ++cnt;
				}
			}
			else {
				s.erase(x, 2);
			}
		}    
    	cout << cnt << "\n";
    }

    return (0^_^0);
}
