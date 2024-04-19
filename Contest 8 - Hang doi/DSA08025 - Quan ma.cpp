#include <bits/stdc++.h>
#define _ 0
using namespace std;

int c[10][10];
pair<int, int> p[8] = {{-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}}; 

void BFS(pair<int, int> a, pair<int, int> b) {
	if (a == b) {
		cout << 0 << "\n";
	}
	memset(c, -1, sizeof c);
	queue<pair<int, int>> q;
	q.push(a);
	c[a.first][a.second] = 0;
	while (1) {
		pair<int, int> tmp = q.front(); q.pop();
		for (int i = 0; i < 8; ++i) {
			int dx = tmp.first + p[i].first;
			int dy = tmp.second + p[i].second;
			if (dx >= 1 and dx <= 8 and dy >= 1 and dy <= 8 and c[dx][dy] == -1) {
				q.push({dx, dy});
				c[dx][dy] = c[tmp.first][tmp.second]+1;
			}
		}
		if (c[b.first][b.second] > 0)
			break;
	}
	cout << c[b.first][b.second] << "\n";
}

int main() {
    int T; cin >> T;
    while (T--) {
    	string x, y;
		cin >> x >> y;
		pair<int, int> a, b;
		a.first = x[0] - 'a' + 1;
		a.second = x[1] - '0';
		b.first = y[0] - 'a' + 1;
		b.second = y[1] - '0';
		BFS(a, b);
    }

    return (0^_^0);
}
