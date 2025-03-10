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

// input
Node* inputTree(){
    int val; cin >> val;

    Node *root = NULL;
    if( val != -1 ) root = new Node(val);

    queue<Node*> q;
    if( root != NULL) q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        int l,r; cin >> l >> r;
        Node *lNode = NULL;
        Node *rNode = NULL;

        if( l != -1 ) lNode = new Node(l);
        if( r != -1 ) rNode = new Node(r);

        if( lNode ) front->left = lNode;
        if( rNode ) front->right = rNode;

        if(front->left ) q.push(front->left);
        if( front->right ) q.push(front->right);
    }
    return root;
}

// output - level order traversar
void levelOrderTraverser(Node *root ){
    queue<Node*> q;
    q.push(root);

    while( !q.empty()){
        Node *front = q.front();
        q.pop();

        cout << front->val << " ";

        if( front->left ) q.push(front->left);
        if( front->right ) q.push(front->right);
    }
}

// Find Depth or height of a binary tree
int maximum_height(Node *root ){
    if( root == NULL ) return 0;

    int l = maximum_height(root->left);
    int r = maximum_height(root->right);
    return max(l,r) + 1;
}

// Leaf Node Count
int leafNodeCount( Node *root ){
    if( root == NULL ) return 0;
    if( root->left == NULL & root->right == NULL ){
        return 1;
    }else{
        int l = leafNodeCount(root->left);
        int r = leafNodeCount(root->right);
        return l+r;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    Node *root = inputTree();
    // levelOrderTraverser(root);

    cout << maximum_height(root);
    cout << endl;
    cout << leafNodeCount(root);
    return 0;
}