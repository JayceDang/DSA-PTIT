#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Node {
	Node* right;
	Node* left;
	int data;
	Node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};

bool isLeaf(Node* node) {
	if (node != NULL && node->right == NULL && node->left == NULL)
		return true;
	return false;
}

Node* create(int data) {
	Node* node = new Node(data);
	return node;
}

void build(Node* root, int u, int v, char d) {
	if (root != NULL) {
		if (root->data == u) {
			if (d == 'L') 
				root->left = create(v);
			else
				root->right = create(v);
		}
		build(root->left, u, v, d);
		build(root->right, u, v, d);
	}
}


int SumRightLeaf(Node* node) {
	if (node == NULL) return 0;
	int sum = 0;

	if (isLeaf(node->right)) {
		sum += node->right->data;
	}
	else {
		sum += SumRightLeaf(node->right);
	}
	sum += SumRightLeaf(node->left);
	return sum;
}
int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int u, v; char d;
		cin >> u >> v >> d;
		Node* root = create(u);
		build(root, u, v, d);
		
		for (int i = 1; i < n; ++i) {
			int u, v; char d;
			cin >> u >> v >> d;
			build(root, u, v, d);
		}
		cout << SumRightLeaf(root) << "\n";
	}

	return (0^_^0);
}
