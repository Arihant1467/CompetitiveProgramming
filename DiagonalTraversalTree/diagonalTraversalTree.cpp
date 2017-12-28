#include <iostream>
#include <vector>
#include <map>
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
void getDiagonaLine(node *root, int slope, map<int, vector<int> > &m)
{
    if (root == NULL){return;}
    else{
        m[slope].push_back(root->data);
        getDiagonaLine(root->right, slope, m);
        getDiagonaLine(root->left, slope + 1, m);
    }
}
void doDiagonalTraversal(node *root)
{
    map<int, vector<int> > m;
    int slope = 0;
    getDiagonaLine(root, slope, m);
    map<int, vector<int> >::iterator it;
    for (it = m.begin(); it != m.end(); it++){
        for (int i = 0; i < it->second.size(); ++i)
        {   cout << it->second[i] << " ";   }
        cout << endl;
    }
}
int main(){
 // Tree Construction
    node *root = getNewNode(8);
    root->left = getNewNode(3);
    root->right = getNewNode(10);
    root->left->left = getNewNode(1);
    root->left->right = getNewNode(6);
    root->right->right = getNewNode(14);
    root->right->right->left = getNewNode(13);
    root->left->right->left = getNewNode(4);
    root->left->right->right = getNewNode(7);
    doDiagonalTraversal(root);
    return 0;
}