#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Node {
	Node* left;
	Node* right;
	int data;
	Node (int data) {
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

void spiral(Node* root) {
	stack<Node*> s1, s2;
	s1.push(root);
	while (!s1.empty() || !s2.empty()) {
		while (!s1.empty()) {
			Node* cur = s1.top(); s1.pop();
			cout << cur->data << " ";
			if (cur->right != NULL) s2.push(cur->right);
			if (cur->left != NULL) s2.push(cur->left);
		}
		while (!s2.empty()) {
			Node* cur = s2.top(); s2.pop();
			cout << cur->data << " ";
			if (cur->left != NULL) s1.push(cur->left);			
			if (cur->right != NULL) s1.push(cur->right);
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		Node* root = NULL;
		build(n, root);	
		spiral(root);
		cout << "\n";
	}

	return (0^_^0);
}

