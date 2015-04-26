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
	public List<List<Integer>> levelOrder(TreeNode root) {
		Queue<TreeNode> Q = new LinkedList<TreeNode>();
		List<List<Integer>> res = new ArrayList<List<Integer>>();
		TreeNode temp;
		int size;
		if (root == null)return res;
		Q.add(root);
		size = 1;
		while (!Q.isEmpty()) {
			List<Integer> row = new ArrayList<Integer>();
			for (int i = 0; i < size; i++) {
				temp = Q.poll();
				row.add(temp.val);
				if (temp.left != null)
					Q.add(temp.left);
				if (temp.right != null)
					Q.add(temp.right);
			}
			size = Q.size();
			res.add(row);
		}
		return res;
	}
}