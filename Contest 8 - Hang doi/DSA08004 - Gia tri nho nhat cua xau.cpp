#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
		int k; string s; cin >> k >> s;
		
		map<char, int> mp;
		for (int i = 0; i < s.size(); ++i) {
			mp[s[i]]++;
		}
		priority_queue<int, vector<int>> pq;
		for (auto x : mp) {
			pq.push(x.second);
		}
		while (k > 0) {
			int x = pq.top(); pq.pop(); 
			pq.push(x-1);
			k--;
		}
		long long ans = 0;
		while (!pq.empty()) {
			ans += pow(pq.top(), 2);
			pq.pop();
		}
		cout << ans << "\n";
    }

    return (0^_^0);
}
