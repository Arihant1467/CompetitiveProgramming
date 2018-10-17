#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

int main(){
    /*
    * Question URL
    * https://leetcode.com/problems/rotate-list/description/
    */
    
    /* This functions creates a list for us to experiment */
    ListNode* createList();
    
    /*This function rotates the list
    * head denotes entry point of the list
    * k denotes how manytimes it needs to be rotated
    */
    ListNode* rotateList(ListNode* head,int k);
    
    ListNode* head = createList();
    head = rotateList(head,6);
    ListNode* temp = head;
    
    cout<<endl;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
    return 0;
}

ListNode* createList(){
    ListNode* head = new ListNode;head->val=1;
    
    head->next= new ListNode;head->next->val=2;

    head->next->next= new ListNode;head->next->next->val=3;

    head->next->next->next= new ListNode;head->next->next->next->val=4;

    head->next->next->next->next= new ListNode;head->next->next->next->next->val=5;

    head->next->next->next->next->next=NULL;
    return head;
}

ListNode* rotateList(ListNode* head,int k){
    
        if(k==0 || head==NULL){
            return head;
        }
        
        ListNode* temp = head;
        int list_len=0;
        while(temp->next){
            ++list_len;
            temp = temp->next;
        }  
        ++list_len;
        temp->next = head;

        int breakpoint = k%list_len;
        ListNode* breakpoint_addr = head;
        for(int k=0;k<list_len-breakpoint-1;++k){
            breakpoint_addr = breakpoint_addr->next;
        }

        head=breakpoint_addr->next ;
        breakpoint_addr->next = NULL;
        return head;
}
