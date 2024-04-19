#include <bits/stdc++.h>
#define _ 0
using namespace std;

string operation = "+-*/";

class Node {
public:
    Node* left;
    Node* right;
    char c;
    Node(char c) {
        this -> c = c;
        this -> left = nullptr;
        this -> right = nullptr;
    }
};

Node* initNode(char c) {
    Node* node = new Node(c);
    return node;
}

void inOrder(Node* s) {
    if (s != nullptr) {
        inOrder(s -> left);
        cout << s->c << " ";
        inOrder(s -> right);
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        stack<Node*> st;

        for (int i = 0; i < s.size(); ++i) {
            if (operation.find(s[i]) != string::npos) {
                Node* tmp = initNode(s[i]);
                tmp -> right = st.top(); st.pop();
                tmp -> left = st.top(); st.pop();
                st.push(tmp);
            }
            else {
                st.push(initNode(s[i]));
            }
        }
        inOrder(st.top());
        cout << "\n";
    }

    return (0^_^0);
}