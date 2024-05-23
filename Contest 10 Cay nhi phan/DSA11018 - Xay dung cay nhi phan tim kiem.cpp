#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Tree {
	Tree* left;
	Tree* right;
	int data;
	Tree(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};

Tree* build(Tree* root, int data) {
	if (root == NULL) {
		return new Tree(data);
	}
	if (data < root->data) {
		root->left = build(root->left, data);
	}
	else {
		root->right = build(root->right, data);
	}
	return root;
}

void preOrder(Tree* root) {
	if (root != NULL) {
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int a[1005];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		Tree* root = new Tree(a[0]);
		for (int i = 1; i < n; ++i) {
			build(root, a[i]);
		}
		preOrder(root);
		cout << "\n";
	}


	return (0^_^0);
}
