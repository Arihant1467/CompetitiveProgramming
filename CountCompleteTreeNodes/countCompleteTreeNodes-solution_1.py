# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def countNodes(self, root: TreeNode) -> int:
        
        def level_traversal(queue=[],level=0):
            
            next_level = []
            for node in queue:
                if node.left:
                    next_level.append(node.left)
                if node.right:
                    next_level.append(node.right)
            if next_level==[]:
                return level,len(queue)
            else:
                return level_traversal(next_level,level+1)
        
        if not root:
            return 0
        if not root.left and root.right:
            return 1
        
        levels,last_nodes = level_traversal([root])
        required = levels-1
        
        nodes_count = pow(2,required+1)-1+last_nodes
        return nodes_count