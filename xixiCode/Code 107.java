/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
    List<List<Integer>> L =new ArrayList<List<Integer>>(); 
    List<Integer> row = new ArrayList<Integer>();
    Queue<TreeNode> Q =new LinkedList<>();
    Stack<TreeNode> S =new Stack<TreeNode>();
    TreeNode t=new TreeNode(-1);
    TreeNode q;
    if(root==null)return L;
     Q.add(root);
     Q.add(t);
     S.push(t);
     while(!Q.isEmpty()){ 
         q=Q.poll();
         if(q.equals(t)&&Q.peek().equals(t))
         break;
         S.push(q);
        if(q.equals(t)){
             q=Q.poll();
             S.push(q);
        }
         if(q.right!=null)
         Q.add(q.right);
         if(q.left!=null)
         Q.add(q.left);
         if(Q.peek()!=null&&Q.peek().equals(t))
         Q.add(t);
     }
     
     row = new ArrayList<Integer>();
       while(!S.isEmpty()){
           q=S.pop();
    if(q.equals(t)){
        L.add(row);
        row = new ArrayList<Integer>();
    }
     else 
       row.add(q.val); 
       }
        return L;
    }
}