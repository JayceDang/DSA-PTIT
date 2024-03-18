#include <bits/stdc++.h>
#define _ 0
using namespace std;
 
int main() {
    int n; cin >> n;
    string s;
    deque<int> dq;
    while (n--) {
		cin >> s;
		if (s == "PUSHBACK") {
			int x; cin >> x;
			dq.push_back(x);
		}
		else if (s == "PUSHFRONT") {
			int x; cin >> x;
			dq.push_front(x);
		}
		else if (s == "POPBACK") {
			if (!dq.empty()) {
				dq.pop_back();
			}
		}
		else if (s == "POPFRONT") {
			if (!dq.empty()) {
				dq.pop_front();
			}
		}
		else if (s == "PRINTBACK") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
			}
			else cout << "NONE\n";
		}
		else if (s == "PRINTFRONT") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
			}
			else cout << "NONE\n";
		}	    	
	}

    return (0^_^0);
}
