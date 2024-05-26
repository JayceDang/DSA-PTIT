#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b; cin >> a >> b;
    a = ' ' + a;
	b = ' ' + b; 
    int dp[105][105];
    
    
    for (int i = 1; i < a.size(); ++i) {
    	for (int j = 1; j < b.size(); ++j) {
    		if (a[i] == b[j]) {
    			dp[i][j] = dp[i-1][j-1]+1;
			}
			//else dp[i][j] = 0; //Lien tiep
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	
	for (int i = 1; i < a.size(); ++i) {
    	for (int j = 1; j < b.size(); ++j) {
    		cout << dp[i][j] << " ";
		}
		cout << "\n";
	}


    return 0;
}
