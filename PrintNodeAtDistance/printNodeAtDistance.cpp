#include <iostream>
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
// To print Leaf
void printLeaves(node *root){
      if(root){
        printLeaves(root->left);
          if(root->left == NULL && root->right == NULL){
            cout<<root->data<<"  ";
          }
        printLeaves(root->right);
      }
}
// To print Left boundary
void printLeftBoundary(node *root){
    if(root->left){
      cout<<root->data<<"  ";
      printLeftBoundary(root->left);
    }
}
// To print right boundary
void printRightBoundary(node *root){
  if(root->right){
    printRightBoundary(root->right);
    cout<<root->data<<"  ";
  }
}
void doBoundaryTraversal(node *root){
  if(root){
    cout<<root->data<<"  ";
    printLeftBoundary(root->left);
    printLeaves(root->left);
    printLeaves(root->right);
    printRightBoundary(root->right);
  }
}
int main(){
 // Tree Construction
    node *root = getNewNode(20);
    root->left = getNewNode(8);
    root->right = getNewNode(22);
    root->left->left = getNewNode(4);
    root->left->right = getNewNode(12);
    root->left->right->left = getNewNode(10);
    root->left->right->right = getNewNode(14);
    root->right->right = getNewNode(25);
    doBoundaryTraversal(root);
    return 0;
}
