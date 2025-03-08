#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

// level order traverser
void level_order_traverse(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // Step-1
        Node *front = q.front();
        q.pop();

        // step-2
        cout << front->val << " ";
        // step-3
        if (front->left != NULL)
            q.push(front->left);
        if (front->right != NULL)
            q.push(front->right);
    }
}

// pre order traverser
void preOrderTraverse(Node *root ){

    if( root == NULL ) return;
    cout << root->val << " ";
    preOrderTraverse(root->left);
    preOrderTraverse(root->right);
}

// in order troverser
void inOrderTraverser(Node *root ){

    if( root == NULL ) return;
    preOrderTraverse(root->left);
    cout << root->val << " ";
    preOrderTraverse(root->right);
}

// post order traverser
void postOrderTraverser(Node *root ){

    if( root == NULL ) return;
    preOrderTraverse(root->left);
    preOrderTraverse(root->right);
    cout << root->val << " ";
}


int main()
{
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
    // connoction

    // Connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    c->left = g;
    d->right = i;
    b->left = e;
    b->right = f;
    f->right = j;

    level_order_traverse(root);
    cout << endl;

    preOrderTraverse(root);
    cout << endl;

    inOrderTraverser(root);
    cout << endl;

    postOrderTraverser(root);
    cout << endl;
    
    return 0;
}