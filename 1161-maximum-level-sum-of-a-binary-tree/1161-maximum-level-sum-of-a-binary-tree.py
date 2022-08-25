# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import defaultdict

class Solution:
    def maxLevelSum(self, root: TreeNode) -> int:
        sum = defaultdict(int)
        def traverse(root, lvl):
            if root:
                sum[lvl] += root.val
                traverse(root.left,  lvl+1)
                traverse(root.right, lvl+1)
			
        traverse(root, 1)
        return max(sum, key=sum.get)
        