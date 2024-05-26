#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void rnl(int i){
	if(i>=v.size()) return ;
	rnl(2*i+2);
	if(v[i]!="N") cout<<v[i]<<" ";
	rnl(2*i+1);
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		rnl(0);
		v.clear();
	}
	return 0;
}
