#include <bits/stdc++.h>
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        int h = helper(root);
        return h-1;
    }

    int helper(Node *temp){
      if (temp == NULL) {
        return 0;
      } else {
        return 1 + max(helper(temp->left), helper(temp->right));
      }
    }