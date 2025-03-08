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

Node* tree_input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // step-1:
        Node *front = q.front();
        q.pop();
        // step-2: do all the tasks
        int left, right;
        cin >> left >> right;
        Node *lNode, *rNode;

       (left != -1) ? lNode = new Node(left): lNode = NULL;
       (right != -1) ? rNode = new Node(right): rNode = NULL;
       
        front->left = lNode;
        front->right = rNode;

        // step-3: queue te child push
        if( front->left != NULL ) q.push(front->left);
        if( front->right != NULL ) q.push(front->right);
    }
    return root;
}

void preOrderTraverse(Node *root ){

    if( root == NULL ) return;
    cout << root->val << " ";
    preOrderTraverse(root->left);
    preOrderTraverse(root->right);
}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Node *root = tree_input();
    preOrderTraverse(root);
    return 0;
}