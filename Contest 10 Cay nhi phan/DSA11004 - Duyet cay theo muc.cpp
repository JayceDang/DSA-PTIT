#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Node {
	Node* left;
	Node* right;
	int data;
	
	Node (int data) {
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

void levelOder(Node* root) {
	queue<Node*> q;
	q.push(root);
	
	while (!q.empty()) {
		Node* now = q.front(); q.pop();
		cout << now->data << " ";
		if (now->left != NULL) q.push(now->left);
		if (now->right != NULL) q.push(now->right);
	}
	
}

int main() {
	int T; cin >> T;
	while (T--) {
		int u, v, n; char d;
		cin >> n;
			
		cin >> u >> v >> d;
		
		Node* root = create(u);
		build(root, u, v, d);
		
		for (int i = 1; i < n; ++i) {
			cin >> u >> v >> d;
			build(root, u, v, d);
		}
		levelOder(root);
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

