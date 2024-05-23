#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Tree {
	Tree* left;
	Tree* right;
	int data;
	Tree (int data) {
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

int TreeDepth(Tree* root) {
	if (root == NULL) return 0;
	int leftDepth = TreeDepth(root->left);
	int rightDepth = TreeDepth(root->right);
	return max(leftDepth, rightDepth)+1;	
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
		cout << TreeDepth(root)-1 << "\n";
	}

	return (0^_^0);
}
