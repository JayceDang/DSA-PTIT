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

Node* build(vector<string>& v) {
	if (v.empty() || v[0] == "N") return NULL;
	Node* root = new Node(stoi(v[0]));
	queue<Node*> q;
	
	q.push(root);
	int i = 1;
	while (!q.empty() && i < v.size()) {
		Node* cur = q.front(); q.pop();
		if (v[i] != "N") {
			cur->left = new Node(stoi(v[i]));
			q.push(cur->left);
		}
		++i;
		
		if (i >= v.size()) break;
		
		if (v[i] != "N") {
			cur->right = new Node(stoi(v[i]));
			q.push(cur->right);
		}
		++i;
	}
	return root;
}

void RNL(Node* root) {
	if (root != NULL) {
		RNL(root->right);
		cout << root->data << " ";
		RNL(root->left);		
	}
}

int main() {
	int T; cin >> T;
	cin.ignore();
	while (T--) {
		string s; getline(cin, s);	
		vector<string> v;
		string tmp;
		stringstream ss(s);
		while (ss >> tmp) {
			v.push_back(tmp);
		}	
		Node* root = build(v);
		RNL(root);
		cout << "\n";
	}

	return (0^_^0);
}
