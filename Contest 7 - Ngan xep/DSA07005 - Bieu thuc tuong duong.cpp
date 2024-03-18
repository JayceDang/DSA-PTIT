#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int a[100],k=-1;
	string s1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(') {
			k++;
			if(i==0||s[i-1]=='+') {
				a[k]=1;
				continue;
			}
			a[k]=0;
			continue;
		}
		if(s[i]==')'){
			k--;
			continue;
		}
		if(k>=0){
			if((s[i]=='+'&&a[k]==1)||(s[i]=='-'&&a[k]==0)) {
				s[i]='+';
				s1+=s[i];
				continue;
			}
			if((s[i]=='+'&&a[k]==0)||(s[i]=='-'&&a[k]==1)) {
				s[i]='-';
				s1+=s[i];
				continue;
			}
		}
		s1+=s[i];
	}
	for(int i=0;i<s1.size();i++){
		if((s1[i]=='-'&&s1[i+1]=='+')||(s1[i]=='+'&&s1[i+1]=='-')) {
			if(i==0) i++;
			continue;
		}
		cout<<s1[i];
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)
		solve(); 
	return 0;
}
