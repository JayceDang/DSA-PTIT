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

bool isLeaf(Node* node) {
	return (node != NULL && node->right == NULL && node->left == NULL);
}

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

bool isfull(Node* root) {
	if (root == NULL)  return false;
	if (root->left == NULL && root->right == NULL) return true;
	if ((root->left) && (root->right)) {
		return (isfull(root->left) && isfull(root->right));
	}
	return false;
}

int leftDepth(Node* root) {
	if (root == NULL) return -1;
	else {
		int left = leftDepth(root->left);
		return left+1;
	}
}

int rightDepth(Node* root) {
	if (root == NULL) return -1;
	else {
		int right = rightDepth(root->right);
		return right+1;
	}
}

int main() {
	int T; cin >> T;
	while (T--) {	
		int n; cin >> n;
		Node* root = NULL;
		build(n, root);
		if (isfull(root) && (rightDepth(root) == leftDepth(root))) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}

	return (0^_^0);
}
