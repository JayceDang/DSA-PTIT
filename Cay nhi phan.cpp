#include <iostream>
using namespace std;

typedef struct node {
	int data;
	node *left;
	node *right;
} *Tree;

void init(Tree *T){
	*T=NULL;
}

Tree getNode(){
	Tree p;
	p=new node;
	return p;
}

int isEmpty(Tree *T){
	if(*T==NULL)
		return 1;
	return 0;
}

Tree makeNode(int x){
	Tree p;
	p = getNode();
	p->data = x;
	p->left=NULL;
	p->right=NULL;
	return p;
}

Tree search(Tree T,  int x) {
	Tree p;
	if(T==NULL)
		return NULL;
	if(T->data==x)
		return T; 
	p = search(T->left, x);
	if (p ==NULL)
		p = search(T->right,x);
	return p;
}

Tree makeRoot(Tree T, int x){
	if(T==NULL) {
		T = makeNode(x);
	}
	return T;
}

void addLeft(Tree T, int x, int y ) {
	Tree p, q;
	p = search(T, x);
	if (p==NULL ) {
		//cout << "not found";
		return;
	} else if (p->left != NULL )
		//cant add
		return;
	else { 
		q = makeNode(y);
		p->left = q;
	}
}

void addRight(Tree T, int x, int y ) {
	Tree p, q;
	p = search(T, x);
	if (p==NULL ) {
		//not found
		return;
	}
	else if (p -> right != NULL)
		//cant add
		return;
	else { 
		q = makeNode(y);
		p->right =q;
	}
}
void removeLeft(Tree T, int  x ) {
	Tree p, q;
	p = search(T, x);
	if (p==NULL ) {
		//not found
		return;
	}
	else if ((p->left)->right !=NULL || (p ->left)->left !=NULL)
		return; //cant remove
	else  { 
		q = p->left;
		p->left =NULL;
		delete q;
	}
}

void removeRight(Tree T, int  x ) {
	Tree p, q;
	p = search(T, x);
	if (p==NULL ) {
		return;
	} else if ((p -> right)->right != NULL || (p -> right)->left != NULL)
		return; //cant remove
	else { 
		q = p ->right;
		p -> right =NULL;
		delete(q);
	}
}

void NLR(Tree T) {
	if (T != NULL) { 
		cout << T->data << " ";
		NLR(T->left);
		NLR(T->right);
	}
}

void LNR(Tree T) {
	if (T != NULL) {
		LNR(T->left);
		cout << T->data << " ";
		LNR(T->right);
	}
}


void LRN(Tree T) {
	if (T != NULL) { 
		LRN(T->left);
		LRN(T->right);
		cout << T->data << " ";
	}
}

int size(Tree T) {
	if (T==NULL) 
		return 0;
	else return(size(T->left) + 1 + size(T->right));
}
int identicalTrees(Tree T1, Tree T2) {
	if (T1==NULL && T2==NULL)
        return 1;
	if (T1!=NULL && T2!=NULL){
		return (T1->data == T2->data &&
            identicalTrees(T1->left, T2->left) &&
            identicalTrees(T1->right, T2->right));
	}
	return 0;
}

int maxDepth(Tree T) {
	if (T==NULL)
		return -1;
	else {
		int lDepth = maxDepth(T->left);
		int rDepth = maxDepth(T->right);
		if (lDepth > rDepth) {
			return lDepth + 1;
		}
		return rDepth + 1;
	}
} 

void mirror(Tree T) {
	if (T==NULL) return;
	else {
		Tree temp;
		mirror(T->left);
		mirror(T->right);
		temp = T->left;
		T->left = T->right;
		T->right = temp;
	}
}

void printArray(int path[], int pathLen) {
	for (int i = 0; i < pathLen; i++) {
		cout << path[i] << " ";
	}
	cout << endl;
}

unsigned int getLeafCount(Tree T) {
	if(T == NULL)
		return 0;
	if(T->left == NULL && T->right==NULL)
		return 1;
	return getLeafCount(T->left) + getLeafCount(T->right);
}

void printPathsRecur(Tree T, int path[], int pathLen)  {
	if (T==NULL) return;
	path[pathLen] = T->data; pathLen++;
	if (T->left==NULL && T->right==NULL)
		printArray(path, pathLen);
	else {
		printPathsRecur(T->left, path, pathLen);
		printPathsRecur(T->right, path, pathLen);
	}
}
//		10
//	20		30
//40		50

int main() {
	Tree T;
	init(&T);
	T = makeNode(10);
	addLeft(T, 10, 20);
	addRight(T, 10, 30);
	T->left->left = makeNode(40);
	T->left->right = makeNode(50);
	NLR(T);
	cout << endl;
	LNR(T);
	cout << endl;
	LRN(T);
	cout << endl;
	cout << size(T);
}
