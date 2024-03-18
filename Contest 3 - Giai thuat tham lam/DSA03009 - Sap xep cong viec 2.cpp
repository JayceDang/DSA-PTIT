#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Job {
	int JobId, Deadline, Profit;
};

bool cmp(Job a, Job b) {
	if (a.Profit == b.Profit)
		return a.Deadline < b.Deadline;
	return a.Profit > b.Profit;
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		
		Job a[n];
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i].Deadline >> a[i].JobId >> a[i].Profit;
		}
		sort(a, a+n, cmp);
		int d = 0, res = 0;
		int dp[1001] = {0};
			
		for (int i = 0; i < n; ++i) {
			while (dp[a[i].JobId] && a[i].JobId > 0) 
				a[i].JobId -= 1;
			if (!dp[a[i].JobId] && a[i].JobId > 0) {
				dp[a[i].JobId] = 1;
				res += a[i].Profit;
				++d;
			}
		}	
		cout << d << " " << res << "\n";	
	}

	return (0^_^0);
}

