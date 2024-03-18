#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
        	cin >> a[i];
		}
		if (n == 1)
			cout << "[" << a[0] << "]\n";
		else {
			vector<string> v;
			int cnt = n;
			string ans = "";
			for (int i = 0; i < n; ++i) {
				if (i == 0)
					ans += "[" + to_string(a[i]) + " ";
				else if (i == n-1)
					ans += to_string(a[i]) + "]";
				else
					ans += to_string(a[i]) + " ";	
			}
			v.push_back(ans);			
			while (cnt > 1) {
				string ans = "";
				ans += "[";
				for (int i = 0; i < cnt-1; ++i) {
					ans += to_string(a[i]+ a[i+1]);
					if (i != cnt-2) {
						ans += " ";
					}
					a[i] = a[i]+a[i+1];
				}
				ans += "]";
				cnt--;
				v.push_back(ans);
			}
			
			for (int i = v.size()-1; i >= 0; i--)
				cout << v[i] << " ";
		}
		cout << "\n";
    }

    return (0^_^0);
}
