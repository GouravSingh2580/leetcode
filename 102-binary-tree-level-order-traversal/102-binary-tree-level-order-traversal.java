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
    public static void pre(List<List<Integer>> lists, TreeNode root, int level)    {
        if(root ==null){
            return;
        }
        List<Integer> list = null;
        if(lists.size() == level){
            list = new ArrayList<Integer>();
            lists.add(list);
        }else{
            list= lists.get(level);
        }
        list.add(root.val);
        pre(lists,root.left,level+1);
        pre(lists,root.right,level+1);
    }
    public List<List<Integer>> levelOrder(TreeNode root) {
        
        List<List<Integer>> lists = new ArrayList<List<Integer>>();
        pre(lists,root,0);
        return lists;
    }
}