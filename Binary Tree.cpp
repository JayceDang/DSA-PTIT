#include <bits/stdc++.h>
using namespace std;

//Constructor cua 1 cay
struct Node {
	int data;
	Node* left; 
	Node* right;
	Node(int val) : data(val), left(NULL), right(NULL) {}
};

int size(Node root) {
	if (!root)	return;
	else return (size(root->left) + size(root->right) + 1);
}

int maxDepth(Node* root) {
	if (!root) return -1;
	else {
		int leftDepth = maxDepth(root->left);
		int rightDepth = maxDepth(root->right);
		return max(leftDepth+1, rightDepth+1);
	}	
}

//Tim kiem tuyen tinh tren cay
Node* search(Node* root, int data) {
	Node* p;
	if (!root) return;
	if (root->data == data)
		return root;
	p = search(root->left, data);
	if (!p)
	p = search(root->right, data);
	return p;
}

void remove-left(Node* root, int data) {
	Node* p, q;
	p =search(root, data);
	if (!p) return;
	else if (!(p->left)->right || !(p->left)->left) return;
	else {
		q = p->left;
		p->left = NULL;
		delete(q);
	}
}

void remove-right(Node* root, int data) {
	Node* p, q;
	p =search(root, data);
	if (!p) return;
	else if (!(p->right)->right || !(p->right)->left) return;
	else {
		q = p->right;
		p->left = NULL;
		delete(q);
	}
}

//Trien khai Cay nhi phan
Node* insert(Node* root, int data) {
	if (root == NULL) {
		return new Node(data);
	}
	if (data < root->data) {
		root->left = insert(root->left, data);
	}
	else {
		root->right = insert(root->right, data);
	}
	return root;
}

// Inorder tree traversal (Left - Root - Right)(LRR)
void InorderTraversal(Node* root) {
	if (!root) return;
	InorderTraversal(root->left);
	cout << root->data << " ";
	InorderTraversal(root->right);
}

//Preorder tree traversal (Root - Left - Right)(RLR)
void PreorderTraversal(Node* root) {
	if (!root) return;
	cout << root->data << " ";
	PreorderTraversal(root->left);
	PreorderTraversal(root->right);
}

//Postorder tree traversal (Left - Right - Root)(LRR)
void PostorderTraversal(Node* root) {
	if (!root) return;
	PostorderTraversal(root->left);
	PostorderTraversal(root->right);
	cout << root->data << " ";
}

//Uu tien cay con ben trai
void LevelOderTraversal(Node* root) {
	if (!root) return;
	queue<Node*> q;
	q.push(root);
	
	while (!q.empty()) {
		Node* node = q.front();
		q.pop();
		cout << node->data << " ";
		if (node->left) {
			q.push(node->left);
		}
		if (node->right) {
			q.push(node->right);
		}
	}
}

//Uu tien cay con ben phai
void RightLevelOderTraversal(Node* root) {
	if (!root) return;
	queue<Node*> q;
	q.push(root);
	
	while (!q.empty()) {
		Node* node = q.front();
		q.pop();
		cout << node->data << " ";
		if (node->right) {
			q.push(node->right);
		}
		if (node->left) {
			q.push(node->left);
		}
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
		
		Node* root = new Node(a[0]);
		for (int i = 1; i < n; ++i) {
			insert(root, a[i]);
		}
		
		cout << "Inorder traversal: ";
		InorderTraversal(root);
		cout << "\nPreorder traversal: ";		
		PreorderTraversal(root);
		cout << "\nPostorder traversal: ";
		PostorderTraversal(root);
		cout << "\nLevel order traversal: ";
		LevelOderTraversal(root);
		cout << "\nRight Level order traversal: ";
		RightLevelOderTraversal(root);
		cout << "\n";
		
	}
	
    return 0;
}
