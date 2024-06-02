#include <bits/stdc++.h>
using namespace std;

struct Compare {
    string name1;
    char c;
    string name2;
};

bool check(vector<Compare>& v) {
    unordered_map<string, vector<string>> g;
    unordered_map<string, int> inDegree;

    for (auto& x : v) {
        const string& a = x.name1;
        const string& b = x.name2;
        char c = x.c;

        if (c == '>') {
            g[a].push_back(b);
            inDegree[b]++;
        } else if (c == '<') {
            g[b].push_back(a);
            inDegree[a]++;
        }

        if (inDegree.find(a) == inDegree.end()) inDegree[a] = 0;
        if (inDegree.find(b) == inDegree.end()) inDegree[b] = 0;
    }

    queue<string> q;
    for (auto& x : inDegree) {
        if (x.second == 0) {
            q.push(x.first);
        }
    }

    int cnt = 0;
    while (!q.empty()) {
        string node = q.front();
        q.pop();
        cnt++;
        for (string& x : g[node]) {
            inDegree[x]--;
            if (inDegree[x] == 0) {
                q.push(x);
            }
        }
    }

    return cnt == inDegree.size();
}

int main() {
	int T = 1;
	while (T--) {
		int n; cin >> n;
		vector<Compare> v;
	   	
		for (int i = 0; i < n; ++i) {
			string name1, name2;
			char c;
			cin >> name1 >> c >> name2;
			v.push_back({name1, c, name2});
		}
	
	    if (check(v)) {
	        cout << "possible";
	    } else {
	        cout << "impossible";
    	}
    	cout << "\n";
	}
	
    return 0;
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/
