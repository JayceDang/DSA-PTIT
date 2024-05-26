#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Job {
	long long JobId, Deadline, Profit;
};

bool cmp(Job a, Job b) {
	if (a.Profit == b.Profit)
		return a.Deadline < b.Deadline;
	return a.Profit > b.Profit;
}

int main() {
	int T = 1;
	while (T--) {
		long long n; cin >> n;
		
		Job a[n+1];
		
		for (int i = 0; i < n; ++i) {
			a[i].Deadline = i+1;
			cin >> a[i].JobId >> a[i].Profit;
		}
		sort(a, a+n, cmp);
		long long res = 0;
		long long dp[n+1] = {0};
			
		for (int i = 0; i < n; ++i) {
			while (dp[a[i].JobId] && a[i].JobId > 0) 
				a[i].JobId -= 1;
			if (!dp[a[i].JobId] && a[i].JobId > 0) {
				dp[a[i].JobId] = 1;
				res += a[i].Profit;
			}
		}	
		cout << res << "\n";	
	}

	return (0^_^0);
}
