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
		int u, v; char d;
		cin >> u >> v >> d;
		Node* root = create(u);
		build(root, u, v, d);
		
		for (int i = 1; i < n; ++i) {
			int u, v; char d;
			cin >> u >> v >> d;
			build(root, u, v, d);
		}
		if (leftDepth(root) == rightDepth(root))
			cout << "1\n";
		else 
			cout << "0\n";	
	}

	return (0^_^0);
}
/*
       __                         ____
      / /___ ___  __________     / __ \____ _____  ____ _
 __  / / __ `/ / / / ___/ _ \   / / / / __ `/ __ \/ __ `/
/ /_/ / /_/ / /_/ / /__/  __/  / /_/ / /_/ / / / / /_/ /
\____/\__,_/\__, /\___/\___/  /_____/\__,_/_/ /_/\__, /
           /____/                               /____/
*/

