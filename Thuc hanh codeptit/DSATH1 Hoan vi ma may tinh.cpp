#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n;
bool ok[100], check[100];
int a[100], b[100];

vector<string> ans, xans;
void in() {
	string tmp = "";
	for (int i = 1; i <= n; ++i) {
		tmp += to_string(a[i]);
	}
	xans.push_back(tmp);
}

void Cout() {
	string tmp = "";
	for (int i = 1; i <= n; ++i) {
		tmp += (char)('A' + b[i]-1);
	}
	ans.push_back(tmp);
}

void Try(int i) {
	for (int j = 1; j <= n; ++j) {
		if (!ok[j]) {
			a[i] = j;
			ok[j] = false;
			if (i == n) {
				in();
			}				
			else Try(i+1);
			ok[j] = false;
		}	
	}
}

void Print(int i) {
	for (int j = 1; j <= n; ++j) {
		if (!check[j]) {
			b[i] = j;
			check[j] = true;
			if (i == n) {
				Cout();	
			} 			
			else Print(i+1);
			check[j] = false;
		}		
	}
}
 
int main() {
	cin >> n;

	Try(1);
	Print(1);
	
	for (int i = 0; i < ans.size(); ++i) {
		for (int j = 0; j < xans.size(); ++j) {
			cout << ans[i] << xans[j];
			if (j != xans.size()-1)
				cout << "\n";
		}
		cout << "\n";
	}

	return (0^_^0);
}

