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
int isLeafNode(node *leaf){
    if(leaf == NULL){
        return 0;
    }
    if(leaf->left == NULL && leaf->right == NULL){
        return 1;
    }
    return 0;
}
int isSumTree(node *root){
    if(root == NULL || isLeafNode(root)){
        return 1;
    }
    if(isSumTree(root->left) && isSumTree(root->right)){
        int ls=0,rs=0;
        if(root->left == NULL){
            ls =0;
        }else if(isLeafNode(root->left)){
            ls = root->left->data;
        }else{
            ls = 2*(root->left->data);
        }
        if(root->right == NULL){
            rs =0;
        }else if(isLeafNode(root->right)){
            rs = root->right->data;
        }else{
            rs = 2*(root->right->data);
        }
        if(root->data == ls+rs){
            return 1;
        }
    }
    return 0;
}
int main(){
 // Tree Construction
    node *root = getNewNode(26);
    root->left = getNewNode(10);
    root->right = getNewNode(3);
    root->left->left = getNewNode(4);
    root->left->right = getNewNode(6);
    root->right->right = getNewNode(3);
    if(isSumTree(root)==1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
