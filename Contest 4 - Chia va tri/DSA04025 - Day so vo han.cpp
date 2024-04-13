#include <bits/stdc++.h>
#define _ 0
using namespace std;

const int mod = 1e9+7;

struct matrix {
	long long x[2][2];
	matrix() {
		memset(x, 0, sizeof(x));
	}
};

long long n;

matrix operator * (const matrix &a, const matrix &b) {
	matrix c;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			for (int k = 0; k < 2; ++k) {
				c.x[i][j] += (a.x[i][k]%mod) * (b.x[k][j]%mod)%mod;  
			}
		}
	}
	return c;
}

matrix Pow(const matrix &T, long long n) {
	if (n == 0) {
		matrix I;
		for (int i = 0; i < 2; ++i) I.x[i][i] = 1;
		return I;
	}
	matrix tmp = Pow(T, n/2);
	tmp = tmp*tmp;
	if (n & 1)
		tmp = tmp * T;
	return tmp;
}

int main() {    
    int T; cin >> T;
    while (T--) {
    	matrix a;
    	cin >> n;
    	if (n <= 1)
    		cout << n << "\n";
    	matrix T;
    	T.x[0][0] = T.x[0][1] = T.x[1][0] = 1;
    	T = Pow(T, n-1);
    	matrix u;
    	u.x[0][0] = 1;
    	matrix ans = T*u;
    	cout << ans.x[0][0] << "\n";
	}
     
    return (0^_^0);
}

