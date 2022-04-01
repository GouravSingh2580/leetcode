/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int tilt=0;
    public int check(TreeNode node)
    {
        if(node==null)
        {
            return 0;
        }        
        int ls=check(node.left);
        int rs=check(node.right);        
        int diff=Math.abs(ls-rs);
        tilt+=diff;        
        return ls+rs+node.val;
    }
    public int findTilt(TreeNode node) {
        check(node);
        return tilt;
    }
}