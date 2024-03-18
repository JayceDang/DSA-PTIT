#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
	return a.first > b.first;
}

int main() {
    int T; cin >> T;
    cin.ignore();
    
    while (T--) {
    	string s, w; 	
    	getline(cin, s);
    	getline(cin, w);
    	
    	map<string, int> mp;
    	string token;
    	stringstream ss(s);
    	
    	while (ss >> token) {
    		string check = "";
    		int res = 0, idx;
    		for (int i = 0; i < token.size(); ++i) {
    			if (isdigit(token[i])) {
    				res = res*10 + token[i]-'0';
				}
				else {
					idx = i;break;
				}
			}
			for (int j = idx; j < token.size(); ++j) {
				check += token[j];
			}
			mp[check] += res;
		}
		
		string line;
		stringstream ww(w);
		while (ww >> line) {
			string check = "";
    		int res = 0, idx;
    		for (int i = 0; i < line.size(); ++i) {
    			if (isdigit(line[i])) {
    				res = res*10 + line[i]-'0';
				}
				else {
					idx = i;break;
				}
			}
			for (int j = idx; j < line.size(); ++j) {
				check += line[j];
			}
			mp[check] += res;
		}
		
    	vector<pair<string, int>> v(mp.begin(), mp.end());
    	sort(v.begin(), v.end(), cmp);
    	for (int i = 1; i < v.size(); ++i) {
    		cout << v[i].second << v[i].first << " ";
    		if (i != v.size()-1)
    			cout << "+ ";
		}
    	cout << "\n";
	}
    
    return 0;
}
