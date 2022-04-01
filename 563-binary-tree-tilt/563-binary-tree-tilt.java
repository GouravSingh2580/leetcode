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
    public int t=0;
    public int sol(TreeNode root){
        if(root==null) return 0;
        
        int left=sol(root.left);
        int right=sol(root.right);
        
        t+=Math.abs(left-right);
        return(left+right+root.val);
    }
    public int findTilt(TreeNode root) {
        sol(root);
        return t;
    }
}