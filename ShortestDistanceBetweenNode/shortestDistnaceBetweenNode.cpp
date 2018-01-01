#include <iostream>
#include<algorithm>
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
node* insertInBinaryTree(node *node,int data){
        if(node == NULL){
            return getNewNode(data);
        }
        if(node->data >= data){  
        node->left = insertInBinaryTree(node->left,data);  
        }
        else if (node->data < data){
            node->right = insertInBinaryTree(node->right, data);  
        }   
        return node;
}
void inorderTraversal(node *root){
    if(root){
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
}
int printDistanceFrom(node* root,int v){
        if(root->data == v){
            return 0;
        }else if(root->data < v){
            return 1+printDistanceFrom(root->left,v);
        }else{
            return 1 + printDistanceFrom(root->right, v);
        }
}
int printSmallestDistanceBetween(node *root,int a,int b){
    if(root){
        if(root->data >=a && root->data >=b){
            return printSmallestDistanceBetween(root->left,a,b);
        }else if (root->data < a && root->data < b){
            return printSmallestDistanceBetween(root->right,a,b);
        }else{
            return printDistanceFrom(root,a)+printDistanceFrom(root,b);
        }
    }
    else{
        return 0;
    }
}
int main(){
    // Tree Construction
    node *root = getNewNode(30);
    root = insertInBinaryTree(root,21);
    root = insertInBinaryTree(root, 34);
    root = insertInBinaryTree(root, 15);
    root = insertInBinaryTree(root, 27);
    root = insertInBinaryTree(root, 31);
    root = insertInBinaryTree(root, 40);
    root = insertInBinaryTree(root, 22);
    root = insertInBinaryTree(root, 28);
    root = insertInBinaryTree(root, 37);
    int a=15,b=28;
    if(a>b){    swap(a,b); }
    printSmallestDistanceBetween(root,a,b);
    return 0;
}