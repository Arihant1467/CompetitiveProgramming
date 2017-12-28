#include<iostream>
#include<vector>
#include<map>
using namespace std;
struct node{
    int data;
    node *left,*right;
};
node *getNewNode(int d){
    node *n = new node;
    n->left = NULL; n->right = NULL; n->data = d;
    return n;
}
void getVerticalLine(node *root, int v, map<int, vector<int> > &m)
{
    if (root == NULL)
        {return;}
    else
    {
        m[v].push_back(root->data);
        getVerticalLine(root->left, v - 1, m);
        getVerticalLine(root->right, v + 1, m);
    }
}
void printVerticalRoot(node *root){
 map<int,vector<int> > m;
 int hd = 0;
 getVerticalLine(root,hd,m);
 map<int, vector<int> >::iterator it;
 for (it = m.begin(); it != m.end(); it++)
 {
     for (int i = 0; i < it->second.size(); ++i)
      { cout << it->second[i] << " ";   }
     cout << endl;
 }
}
int main(){
    // Tree Construction
    node *root = getNewNode(1);
    root->left = getNewNode(2);
    root->right = getNewNode(3);
    root->left->left = getNewNode(4);
    root->left->right = getNewNode(5);
    root->right->left = getNewNode(6);
    root->right->left->right = getNewNode(8);
    root->right->right = getNewNode(8);
    root->right->right->right = getNewNode(9);
    printVerticalRoot(root);
    return 0;
}