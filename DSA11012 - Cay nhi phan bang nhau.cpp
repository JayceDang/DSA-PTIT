#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Node {
	Node* left;
	Node* right;
	int data;
	Node(int data) {
		this->data = data;
		this->right = this->left = NULL;
	}
}; 

void build(int n, Node*	&root) {
	map<int, Node*> mp;
	int u, v; char c;
	for (int i = 0; i < n; ++i) {
		cin >> u >> v >> c;
		if (mp.find(u) == mp.end()) {
			mp[u] = new Node(u);
			if (root == NULL) {
				root = mp[u];
			}
		}
		Node *p = mp[u];
		mp[v] = new Node(v);
		if (c == 'L') {
			p->left = mp[v];
		}
		else {
			p->right = mp[v];
		}
	}	
}

bool isSame(Node* p, Node* q) {
	if (p == NULL && q == NULL) return true;
	if (p != NULL && q != NULL) {
		return (p->data == q->data) && (isSame(p->left, q->left)) && (isSame(p->right, q->right));
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		Node* p = NULL;
		build(n, p);
		int m; cin >> m;
		Node* q = NULL;
		build(m, q);
		if (isSame(p, q)) {
			cout << "1\n";
		}
		else 
			cout << "0\n";		
	}

	return (0^_^0);
}
