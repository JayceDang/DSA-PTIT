#include <bits/stdc++.h>
#define _ 0
#define mxN 100005
using namespace std;

int n;

struct point {
	double x, y;
};

bool cmp_x(const point& a, const point& b) {
	return a.x < b.x;
}

bool cmp_y(const point& a, const point& b) {
	return a.y < b.y;
}

point a[mxN];
double res;

void update(const point& a, const point& b) {
	double dis = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
	if (dis < res)
		res = dis;
}

void Find(int l, int r) {
	if (r <= l)
		return;
	if (r == l+1) {
		update(a[l], a[r]);
		if (!cmp_y(a[l], a[r]))
			swap(a[l], a[r]);
		return;
	}
	
	int m = (l+r)/2;
	double midx = a[m].x;
	Find(l, m);
	Find(m+1, r);
	
	static point t[mxN];
	merge(a+l, a+m+1, a+m+1, a+r+1, t, cmp_y);
	copy(t, t+r-l+1, a+l);
	int tm = 0;
    for (int i = l; i <= r; ++i) if (abs(a[i].x-midx) < res) {
        for (int j = tm-1; j >= 0 && t[j].y > a[i].y-res; j--)
            update(a[i], t[j]);
        t[tm++] = a[i];
    }
}

int main(){
	int T; cin >> T;
	while (T--) {
		cin >> n;
		for (int i = 0; i < n; ++i) {
			cin >> a[i].x >> a[i].y;
		}
		res = 1e20;
		sort(a, a+n, cmp_x);
		Find(0, n-1);
		cout << fixed << setprecision(6) << res <<"\n";
	}
	
	return (0^_^0);
}
