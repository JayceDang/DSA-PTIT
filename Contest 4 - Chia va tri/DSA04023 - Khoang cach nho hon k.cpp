#include<bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n, k;
		cin >> n >> k;

		vector<int> v(n);

		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		int i = 0;
		int j = 0;
		long long cnt = 0;

		v.push_back(10000000);
		n++;

		while (i < n && j < n - 1) {
			if (abs(v[i] - v[j + 1]) < k) {
				j++;
			}
			else {
				//cout << i << " " << j << endl;
				cnt += (j - i);
				i++;
				if (i > j) j = i;
			}
		}

		cout << cnt << endl;
	}

    return (0^_^0);
}