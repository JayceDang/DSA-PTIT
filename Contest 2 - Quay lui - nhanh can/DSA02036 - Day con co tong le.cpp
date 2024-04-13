#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n, a[100];
vector<int> v;
vector<string> ans;

void printArr() {
    string res = "";
    for (int i = 0; i < v.size(); ++i) {
        res += to_string(v[i]) + " ";   
    }
    res.pop_back();
    ans.push_back(res);
}

void Try(int i, int sum) {
    if (sum & 1)
        printArr();
    if (i == n) return;
    for (int j = i+1; j <= n; ++j) {
        v.push_back(a[j]);
        Try(j, sum + a[j]);
        v.pop_back();
    }
}

int main() {
	int T; cin >> T;
    while (T--) {
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        sort(begin(a) + 1, end(a) + 1, [](int& a, int& b) {
			return a > b;
		});
        Try(0, 0);

        sort(ans.begin(), ans.end());

        for (auto x : ans)
            cout << x << "\n";

        cout << "\n";
    }

	return (0^_^0);
}