#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> s1, s2;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') {
            if (!s1.empty()) {
            	s2.push(s1.top());
                s1.pop();
            }
            continue;
        }
        if (s[i] == '>') {
            if (!s2.empty()) {
                s1.push(s2.top());
                s2.pop();
            }
            continue;
        }
        if (s[i] == '-') {
            if (!s1.empty()) {
                s1.pop();
            }
            continue;
        }
        s1.push(s[i]);
    }

    while (!s2.empty()) {
        s1.push(s2.top());
        s2.pop();
    }
    
    string ans = "";
    while (!s1.empty()){
    	ans += s1.top();
    	s1.pop();
	}
    for (int i = ans.size()-1; i >=0 ; i--) 
		cout << ans[i];

    return 0;
}
