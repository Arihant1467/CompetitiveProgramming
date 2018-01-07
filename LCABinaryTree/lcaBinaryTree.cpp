#include<iostream>
using namespace std;
struct node{
    int data;
    node *left, *right;
};
node *getNewNode(int d){
    node *n = new node;
    n->left = NULL;n->right = NULL;n->data = d;
    return n;
}
node* findLCA(node *root,int n1,int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    node* left_LCA = findLCA(root->left,n1,n2);
    node* right_LCA = findLCA(root->right,n1,n2);
    if(left_LCA && right_LCA)   return root;
    if(left_LCA != NULL){   return left_LCA;    }
    else{   return right_LCA;   }
}
int main(){
 // Tree Construction
    node *root = getNewNode(1);
    root->left = getNewNode(2);
    root->right = getNewNode(3);
    root->left->left = getNewNode(4);
    root->left->right = getNewNode(5);
    root->right->left = getNewNode(6);
    root->right->right = getNewNode(7);
    cout<<"The LCA(4,5) is :"<<findLCA(root,4,5)->data<<endl;
}
