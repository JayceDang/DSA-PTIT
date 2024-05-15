#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        stack<int> st;
        int cnt = 0;
        st.push(-1);
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                st.push(i);
            }
            else {
                st.pop();
                if (st.size() > 0) {
                    cnt = max(cnt, i - st.top());
                }
                if (st.size() == 0)
                    st.push(i);
            }
        }
        
    }

    return (0^_^0);
}
