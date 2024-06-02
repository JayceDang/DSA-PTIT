#include <bits/stdc++.h>
#define _ 0
using namespace std;

int n;
string s[100];
int a[100];

set<string> se;
string tmp = "";

void Try(int i){
	for(int j = 0; j <= 1; ++j){
		a[i] = j;
		if(i == n) {
			for(int k = 1; k <= n; ++k){
				if(a[k]) 
					tmp += s[k];
			}
			se.insert(tmp);
			tmp = "";
		}
		else Try(i+1);
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; ++i){
		cin >> s[i];
	}
	Try(1);
	for(string x : se) 
		cout << x << "\n";
	
	return (0^_^0);
}
