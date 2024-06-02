#include <bits/stdc++.h>
#define _ 0
using namespace std;

int a[1005][1005];
int tmp[1005][1005];

void solve(){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= m; ++j){
			cin >> a[i][j];
			tmp[i][j] = 1e9+7;
		}
	}
	queue<pair<int, int>> q;
	q.push({1, 1});
	tmp[1][1] = 0;
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if(x == n && y == m){
			cout << tmp[x][y];
			return;
		}
		int i, j;
		if(x + 1 <= n){
			i = x + abs(a[x][y] - a[x+1][y]);
			j = y;
			if(i <= n && tmp[i][j] == 1e9+7){
				tmp[i][j] = tmp[x][y] + 1;
				q.push({i, j});
			}
		}
		if(y + 1 <= m){
			i = x;
			j = y + abs(a[x][y] - a[x][y+1]);
			if(j <= m && tmp[i][j] == 1e9+7){
				tmp[i][j] = tmp[x][y] + 1;
				q.push({i, j});
			}
		}
		if(x + 1 <= n && y + 1 <= m){
			i = x + abs(a[x][y] - a[x+1][y+1]);
			j = y + abs(a[x][y] - a[x+1][y+1]);
			if(i <= n && j <= m && tmp[i][j] == 1e9+7){
				tmp[i][j] = tmp[x][y] + 1;
				q.push({i, j});
			}
		}
	}
	cout << -1;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
		cout << "\n";
	}
    
    return (0^_^0);
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/

