#include <bits/stdc++.h>
#define _ 0
using namespace std;
int a, b, c, cont, n = 0;

struct huong {
	vector<string> B;
};
struct huong1 {
	vector<vector<int>> B;
};

vector<huong> A;
vector<huong1> chuaxet;

bool ok;

void Try(int i, int j, int k) {
	queue<vector<int>> q;
	vector<int> v = {i, j, k};
	q.push(v);
	chuaxet[i].B[j][k] = 1;
	while (!q.empty()) {
		v = q.front();
		q.pop();
		i = v[0];
		j = v[1];
		k = v[2];
		//Xet mat phang (i, j, 0)
		//Sang trai
		if (i > 0 && (A[i - 1].B[j][k] == 'E' || (A[i - 1].B[j][k] == '.' && chuaxet[i - 1].B[j][k] == 0))) {
			q.push({i - 1, j, k});
			chuaxet[i - 1].B[j][k] = chuaxet[i].B[j][k] + 1;
			if (A[i - 1].B[j][k] == 'E') {
				cont = chuaxet[i - 1].B[j][k];
				ok = 1;
				return;
			}
		}
		//Sang phai
		if (i < a - 1 && (A[i + 1].B[j][k] == 'E' || (A[i + 1].B[j][k] == '.' && chuaxet[i + 1].B[j][k] == 0))) {
			q.push({i + 1, j, k});
			chuaxet[i + 1].B[j][k] = chuaxet[i].B[j][k] + 1;
			if (A[i + 1].B[j][k] == 'E') {
				cont = chuaxet[i + 1].B[j][k];
				ok = 1;
				return;
			}
		}
		//Di ngang
		if (j > 0 && (A[i].B[j - 1][k] == 'E' || (A[i].B[j - 1][k] == '.' && chuaxet[i].B[j - 1][k] == 0))) {
			q.push({i, j - 1, k});
			chuaxet[i].B[j - 1][k] = chuaxet[i].B[j][k] + 1;
			if (A[i].B[j - 1][k] == 'E') {
				cont = chuaxet[i].B[j - 1][k];
				ok = 1;
				return;
			}
		}
		//Di doc
		if (j < b - 1 && (A[i].B[j + 1][k] == 'E' || (A[i].B[j + 1][k] == '.' && chuaxet[i].B[j + 1][k] == 0))) {
			q.push({i, j + 1, k});
			chuaxet[i].B[j + 1][k] = chuaxet[i].B[j][k] + 1;
			if (A[i].B[j + 1][k] == 'E') {
				cont = chuaxet[i].B[j + 1][k];
				ok = 1;
				return;
			}
		}
		//Xet mat phang (i, j, k)
		//di len 
		if (k > 0 && (A[i].B[j][k - 1] == 'E' || (A[i].B[j][k - 1] == '.' && chuaxet[i].B[j][k - 1] == 0))) {
			q.push({i, j, k - 1});
			chuaxet[i].B[j][k - 1] = chuaxet[i].B[j][k] + 1;
			if (A[i].B[j][k - 1] == 'E') {
				cont = chuaxet[i].B[j][k - 1];
				ok = 1;
				return;
			}
		}
		//di xuong
		if (k < c - 1 && (A[i].B[j][k + 1] == 'E' || (A[i].B[j][k + 1] == '.' && chuaxet[i].B[j][k + 1] == 0))) {
			q.push({i, j, k + 1});
			chuaxet[i].B[j][k + 1] = chuaxet[i].B[j][k] + 1;
			if (A[i].B[j][k + 1] == 'E') {
				cont = chuaxet[i].B[j][k + 1];
				ok = 1;
				return;
			}
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		cin >> a >> b >> c;
		A.clear();
		chuaxet.clear();
		ok = 0;
		int i1, j1, k1;
		for (int i = 0; i < a; i++) {
			huong x;
			huong1 y;
			for (int j = 0; j < b; j++) {
				string s;
				cin >> s;
				x.B.push_back(s);
				vector<int> v;
				for (int k = 0; k < c; k++) {
					v.push_back(0);
					if (s[k] == 'S') {
						i1 = i;
						j1 = j;
						k1 = k;
					}
				}
				y.B.push_back(v);
			}
			A.push_back(x);
			chuaxet.push_back(y);
		}
		Try(i1, j1, k1);
		if (ok)
			cout << cont - 1 << endl;
		else
			cout << "-1\n";
	}
	return (0^_^0);
}
