#include<iostream>
#include<algorithm>

using namespace std;

struct node{
	int data;
	node*left;
	node*right;
};

int main(){
	int depth(node *root);
	node *createtree();
	node *root = createtree();
	cout<<"The maximum depth of binary tree is:"<<depth(root)<<endl;
	return 0;

}

node *createtree(){
	node *root = new node;
	root->data = 3;

	root->left = new node;
	root->left->data = 9;
	
	root->left->left = NULL;
	root->left->right = NULL;

	root->right = new node;
	root->right->data = 20;

	root->right->left = new node;
	root->right->left->data = 15;
	root->right->left->left = NULL;
	root->right->left->right = NULL;

	root->right->right = new node;
	root->right->right->data = 7;
	root->right->right->left = NULL;
	root->right->right->right = NULL;

	return root;
}

int depth(node *root){
	if(root == NULL){
		return 0;
	}else{
		return max(1+depth(root->left),1+depth(root->right));
	}
}
