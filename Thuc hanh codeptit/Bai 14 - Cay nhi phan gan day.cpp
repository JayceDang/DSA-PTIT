#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Node {
	int val;
	Node* left;
	Node* right;
	Node(int x) : val(x), left(NULL), right(NULL) {	}
};

Node* insertLevelOder(int a[], Node* root, int i, int n) {
	if (i < n) {
		Node* temp = new Node(a[i]);
		root = temp;
		root -> left = insertLevelOder(a, root->left, 2*i+1, n);
		root -> right = insertLevelOder(a, root->right, 2*i+2, n);
	}
	return root;
}

void inOderTravarsal(Node* root) {
	if (root != NULL) {
		inOderTravarsal(root->left);
		cout << root->val << " ";
		inOderTravarsal(root->right);
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		
		Node* root = NULL;
		root = insertLevelOder(a, root, 0, n);
		inOderTravarsal(root);
		cout << "\n";
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

