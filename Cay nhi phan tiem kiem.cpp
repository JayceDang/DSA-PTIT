#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct node {
	int data;
	node *left;
	node *right;
	int height;
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

int height(Tree T)
{
    if (T == NULL)
        return 0;
    return T->height;
}
 
Tree leftRotate(Tree T) {
	Tree T1 = T->right; 
	Tree T2 = T1->left;
	T1->left = T;
	T->right = T2;
	T->height = max(height(T->left), height(T->right))+1;
	T1->height = max(height(T1->left), height(T1->right))+1;
	return T1;
}

Tree rightRotate(Tree T) {
	Tree T1 = T->left;
	Tree T2 = T1->right;
	T1->right = T; T->left = T2;
	T->height = max(height(T->left), height(T->right))+1;
	T1->height = max(height(T1->left), height(T1->right))+1;
	return T1;
}

int getBalance(Tree T)
{
    if (T == NULL)
        return 0;
    return height(T->left) - height(T->right);
}
Tree makeNode(int x){
	Tree  p;
	p = getNode();
	p->data = x;
	p->left=NULL;
	p->right=NULL;
	p->height = 1;
	return p;
}
Tree minValueNode(Tree T)
{
    Tree current = T;
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
Tree search(Tree T, int x){
	Tree p = T;
	if ( p!=NULL ) { 
		if (x < T->data)
			p = search(T->left, x);
		else
			p = search(T->right, x);
	}
	return(p);
}

Tree search2(Tree T, int x){ Tree p = T;
	while (p!=NULL) {
		if (x == p->data)
			return p;
		else if (x < p->data) {
			p = p -> left;
		}
		else p = p -> right;
	}
	return p;
}

Tree makeRoot(Tree T, int x){
	if(T==NULL) {
		T = makeNode(x);
	}
	return T;
}

Tree addNode(Tree T, int x) {
    if (T == NULL) {
		T = makeNode(x);
		return T;
	}
    if (x < T->data)
        T->left = addNode(T->left, x);
    else if (x > T->data)
        T->right = addNode(T->right, x);
    else // Equal keys are not allowed in BST
        return T;
    /* 2. Update height of this ancestor node */
    T->height = 1 + max(height(T->left),
                        height(T->right));
 
    /* 3. Get the balance factor of this ancestor
        node to check whether this node became
        unbalanced */
    int balance = getBalance(T);
 
    // If this node becomes unbalanced, then
    // there are 4 cases
 
    // Left Left Case
    if (balance > 1 && x < T->left->data)
        return rightRotate(T);
 
    // Right Right Case
    if (balance < -1 && x > T->right->data)
        return leftRotate(T);
 
    // Left Right Case
    if (balance > 1 && x > T->left->data)
    {
        T->left = leftRotate(T->left);
        return rightRotate(T);
    }
 
    // Right Left Case
    if (balance < -1 && x < T->right->data)
    {
        T->right = rightRotate(T->right);
        return leftRotate(T);
    }
    return T;
}

Tree deleteNode(Tree T, int key) {
    if (T == NULL)
        return T;
 
    if ( key < T->data )
        T->left = deleteNode(T->left, key);
 
    else if( key > T->data )
        T->right = deleteNode(T->right, key);
 
    else
    {
        if( (T->left == NULL) ||
            (T->right == NULL) )
        {
            Tree temp = T->left ?
                         T->left :
                         T->right;
            if (temp == NULL)
            {
                temp = T;
                T = NULL;
            }
            else
            *T = *temp; 
            free(temp);
        }
        else
        {
            Tree temp = minValueNode(T->right);
            T->data = temp->data;
            T->right = deleteNode(T->right, temp->data);
        }
    }
 
    if (T == NULL)
    	return T;
    T->height = 1 + max(height(T->left),
                           height(T->right));
    int balance = getBalance(T);
 	
 	//Left Left Case
    if (balance > 1 &&
        getBalance(T->left) >= 0)
        return rightRotate(T);
 
    // Left Right Case
    if (balance > 1 &&
        getBalance(T->left) < 0)
    {
        T->left = leftRotate(T->left);
        return rightRotate(T);
    }
 
    // Right Right Case
    if (balance < -1 &&
        getBalance(T->right) <= 0)
        return leftRotate(T);
 
    // Right Left Case
    if (balance < -1 &&
        getBalance(T->right) > 0)
    {
        T->right = rightRotate(T->right);
        return leftRotate(T);
    }
 
    return T;
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

int main() {
	Tree T;
	init(&T);
	T = makeRoot(T, 40);
	addNode(T, 30);
	addNode(T, 60);
	addNode(T, 25);
	addNode(T, 35);
	addNode(T, 50);
	addNode(T, 70);
	addNode(T, 65);
	addNode(T, 90);
	addNode(T, 62);
	addNode(T, 68);
//	T = leftRotate(T);
//	T = rightRotate(T);
	NLR(T);
	cout << endl;
	LNR(T);
	cout << endl;
	LRN(T);
	cout << endl;
	cout << size(T);
}
