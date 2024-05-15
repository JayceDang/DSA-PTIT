#include <bits/stdc++.h>
#define _ 0
using namespace std;

pair<int, int> p[8] = {{-1, 0}, {0, 1}, {0, -1}, {1, 0}};
int a[505][505], day[505][505];  
int r, c; 

bool check(int x, int y) {
	if (x >= 1 && x <= r && y >= 1 && y <= c && a[x][y] == 1) {
		return true;
	}
	return false;
}
 
int main() {
	int T; cin >> T;
	while (T--) {
		cin >> r >> c;	
			
		memset(day, 0, sizeof day);
		int cnt = 0;
		queue<pair<int, int>> q;
		
		for (int i = 1; i <= r; ++i) {
			for (int j = 1; j <= c; ++j) {
				cin >> a[i][j];
				if (a[i][j] == 2)
					q.push({i, j});
				if (a[i][j] == 1)
					++cnt;
			}
		}
		
		int ans = -1;
		
		while (!q.empty()) {
			pair<int, int> now = q.front(); q.pop();	
			for (int i = 0; i < 4; ++i) {
				int dx = now.first + p[i].first;
				int dy = now.second + p[i].second;
				if (check(dx, dy) && !day[dx][dy]) {
					cnt--;
					a[dx][dy] = 2;
					day[dx][dy] = day[now.first][now.second]+1;
					if (!cnt) {
						ans = day[dx][dy];
						break;
					}
					q.push({dx, dy});
				}
			}		
		}
		cout << ans << "\n";
	}

	return (0^_^0);
}
