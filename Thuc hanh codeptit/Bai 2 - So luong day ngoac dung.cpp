#include <bits/stdc++.h>
using namespace std;

bool isValidParentheses(const string &s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }
        if (balance < 0) return false;
    }
    return balance == 0;
}

int calculateDegree(const string &s) {
    int max_depth = 0, current_depth = 0;
    for (char c : s) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) max_depth = current_depth;
        } else if (c == ')') {
            current_depth--;
        }
    }
    return max_depth;
}

void countWays(const string &s, int pos, int k, int &count) {
    if (pos == s.size()) {
        if (isValidParentheses(s) && calculateDegree(s) == k) {
            count++;
        }
        return;
    }

    if (s[pos] == '?') {
        string s1 = s;
        s1[pos] = '(';
        countWays(s1, pos + 1, k, count);
        s1[pos] = ')';
        countWays(s1, pos + 1, k, count);
    } else {
        countWays(s, pos + 1, k, count);
    }
}

int main() {
	int T = 1;
	while (T--) {
		int k;
	    string s;
	    cin >> k;
	    cin >> s;
	
	    int count = 0;
	    countWays(s, 0, k, count);
	
	    cout << count << "\n";
	}
    

    return 0;
}
