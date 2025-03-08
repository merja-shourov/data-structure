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

Node* input_tree(){
    int val; cin >> val;
    
    Node *root;
    if( val != -1 ) root = new Node(val);
    else root = NULL;

    queue<Node*> q;
    if( root != NULL ) q.push(root);

    while( !q.empty() ){
        Node *front = q.front();
        q.pop();

        int l,r; cin>> l >> r;
        Node *lNode,  *rNode;
        if( l != -1 ){
            lNode = new Node(l);
        }else lNode = NULL;

        if( r != -1 ) {
            rNode = new Node(r);
        }else rNode = NULL;

        front->left = lNode;
        front->right = rNode;

        if( lNode != NULL ) q.push(lNode);
        if( rNode != NULL ) q.push(rNode);
    }

    return root;
}

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
    cout << endl;
}

int nodeCount( Node *root ){
   if( root == NULL ) return 0;
   int l = nodeCount(root->left);
   int r = nodeCount(root->right);
   return l+r+1;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    
    Node *root = input_tree();

    level_order_traverse(root);
    
    cout << "total node: " <<  nodeCount(root) << endl;
    return 0;
}