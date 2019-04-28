# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def countNodes(self, root: TreeNode) -> int:
        
        def counter(root,count=0):
            
            if root:
                return 1+counter(root.left)+counter(root.right)
            else:
                return 0
        
        if not root:
            return 0
        if not root.left and root.right:
            return 1
        
        return counter(root,0)