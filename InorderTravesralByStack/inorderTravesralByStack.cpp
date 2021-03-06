#include <iostream>
#include <stack>
using namespace std;
struct node{
    int data;
    node *left, *right;
};
node *getNewNode(int d){
    node *n = new node;
    n->left = NULL;
    n->right = NULL;
    n->data = d;
    return n;
}
void doInorderTraversalWithoutRecusrion(node *root){
    if(root == NULL){   return; }
    bool completed = false;
    stack<node*> ss;
    node *current = root;
    while(!completed){
        if(current != NULL){
            ss.push(current);
            current = current->left;
        }else{
            if(!ss.empty()){
                current = ss.top();
                cout<<current->data<<" ";
                ss.pop();
                current=current->right;
            }else{
                completed = true;
            }
        }
    }
}
int main(){
// Tree Construction
    node *root = getNewNode(1);
    root->left = getNewNode(2);
    root->right = getNewNode(3);
    root->left->left = getNewNode(4);
    root->left->left->left = getNewNode(10);
    root->left->left->right = getNewNode(9);
    root->right->right = getNewNode(5);
    root->right->right->left = getNewNode(6);
    root->right->right->right = getNewNode(7);
    doInorderTraversalWithoutRecusrion(root);
    return 0;
}