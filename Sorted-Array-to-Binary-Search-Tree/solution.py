# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    
    def sortedArrayToBST(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
        def build(start,end):
            if start>=end:
                return None
            mid = (start+end)//2
            root = TreeNode(nums[mid])
            root.left = build(start,mid)
            root.right = build(mid+1,end)
            return root

        
        return build(0,len(nums))
        