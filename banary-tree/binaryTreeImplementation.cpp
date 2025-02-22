#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node( int val ){
        this->val = val;
        left = NULL;
        right = NULL;
    }

};

void preOrder(Node *root ){
    if( root == NULL ) return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
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
        Node *e = new Node(60);
        Node *f = new Node(70);
        Node *g = new Node(80);
        Node *i = new Node(90);
        Node *j = new Node(100);

        // Connection
        root->left = a;
        root-> right = b;
        a->left = c;
        a->right = d;
        c->left = g;
        d->right = i;
        b->left = e;
        b->right = f;
        f->right = j;

        // print 
        preOrder(root);
    return 0;
}
