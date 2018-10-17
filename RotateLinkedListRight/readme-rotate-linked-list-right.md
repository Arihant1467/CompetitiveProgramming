### Rotate a linked list provided by number of rotations
[Question](https://leetcode.com/problems/rotate-list/description/)


##### Functions
1. **createList()** Creates a list for us
2. **rotateList(ListNode* head,int k)** rotates the list where k denotes number of rotations

#### Algorithm .
1. We make list circular by connecting last node to first node
2. Then we find the length of the list
3. After finding the length, we find a breakpoint and break the list at that point to obtain a singly linked list from circular list. 
4. After breaking the list, we upadte the head and return the head.

##### Complexity
**Time Complexity** : 0(n)
**Space Complexity** : 0(1)


