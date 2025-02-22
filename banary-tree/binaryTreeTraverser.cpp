#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *left;
    Node *right;
    int val;

    Node(int val ){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

// root - left - right
void preorder(Node *root ){
    if( root == NULL ) return;
    
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
// left - root - right
void inorder(Node *root ){
    if( root == NULL ) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// left-right-root
void postorder(Node *root){
    if( root == NULL ) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    Node *root = new Node(10); 
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(70);
    Node *f = new Node(80);
    Node *g = new Node(60);
    Node *h = new Node(90);

    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    d->left = g;
    b->left = e;
    b->right = f;
    e->left = h;

    // traversal
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);

    return 0;
}