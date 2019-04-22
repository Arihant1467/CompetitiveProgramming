/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        int lengthOfList = this->count(head);
        return build(&head,lengthOfList);
    }
    
    TreeNode* build(ListNode** head,int count){
        
        if(count<=0){
            return NULL;
        }
        
        TreeNode* left = build(head,count/2);
        TreeNode* root = new TreeNode((*head)->val);
        root->left = left;
        
        *head = (*head)->next;
        TreeNode* right = build(head,count-(count/2)-1);
        root->right = right;
        return root;
    }
    
    int count(ListNode* node){
        int count=0;
        while(node!=NULL){
            count+=1;
            node = node->next;
        }
        return count;
    }
};