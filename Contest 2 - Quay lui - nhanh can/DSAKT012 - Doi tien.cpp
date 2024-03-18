#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, s, ans, cnt, res = INT_MAX;
int t[50], x[50], y[50], tmax[50];
bool vis[50];

void output() {
	for (int i = 1; i <= res; ++i) {
		cout << y[i] << " ";
	}
	cout << "\n";
}

void check() {
	if (cnt < res) {
		res = cnt;
		for (int i = 1; i <= cnt; ++i) {
			y[i] = x[i];
		}
	}
}

void Try(int i) {
	if (cnt + (s-ans)/tmax[i] > res)
		return;
	
    for (int j = 1; j <= n; ++j) {
        if (!vis[j]) {
            vis[j] = true;
            x[i] = t[j];
            ans += t[j];
            ++cnt;
            if (ans == s) {
                check();
            }
            else //Backtrack
                Try(i+1);
                vis[j] = false;
                ans -= t[j];
                cnt--;
        }
    }
}

int main() {
    cin >> n >> s;
    for (int i = 1; i <= n; ++i) {
        cin >> t[i];
    }
    cnt = ans = 0;
    res = INT_MAX;
    memset(vis, false, sizeof vis);
    
    tmax[n] = t[n];
    for (int i = n-1; i >= 1; i--) {
    	tmax[i] = tmax[i+1];
    	if (t[i] > tmax[i])
    		tmax[i] = t[i];
	}
    for (auto x : tmax)
    	cout << x << " ";
    
//    Try(1);
//    output();
    cout << res << "\n";
    return (0^_^0);
}
