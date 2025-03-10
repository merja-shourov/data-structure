// codeninja problem
#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSum(BinaryTreeNode<int> *root)
{
	queue<BinaryTreeNode<int>*> q;
	q.push(root);

	long long sum = 0;
	while( !q.empty()){
		BinaryTreeNode<int> *front = q.front();
		q.pop();

		// step-2;

		// step-3
		if( front->left ){
			sum += (front->left->data);
			q.push(front->left);
		} 
		if( front->right ) q.push(front->right);

	}
	return sum;
}
