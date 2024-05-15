#include <bits/stdc++.h>
#define _ 0
using namespace std;

class Point {
	public:
		int x, y, c;
		bool operator < (const Point& other) const {
			return this -> c > other.c;
		}
};

int n, m; 
int a[505][505], dis[505][505];
pair<int, int> p[4] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

bool check(int x, int y) {
	if (x >= 1 && y >= 1 && x <= n && y <= m) 
		return true;
	return false;
}

void dijkstra() {
	priority_queue<Point> q;
	
	q.push({1, 1, 0});
	while (!q.empty()) {
		Point now = q.top(); q.pop();
		
		for (int i = 0; i < 4; ++i) {
			int dx = now.x + p[i].first;
			int dy = now.y + p[i].second;
			if (check(dx, dy)) {
				int res = dis[now.x][now.y] + a[dx][dy];
				if (res < dis[dx][dy]) {
					dis[dx][dy] = res;
					q.push({dx, dy, dis[dx][dy]});
				}
			}
		}	
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> n >> m;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				dis[i][j] = INT_MAX;
				cin >> a[i][j];
			}
		}
		dis[1][1] = a[1][1];
		dijkstra();
		cout << dis[n][m] << "\n";
	}
	
	return (0^_^0);
}
