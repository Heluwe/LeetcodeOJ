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
	public List<Integer> rightSideView(TreeNode root) {
		int size;
		TreeNode temp;
		Queue<TreeNode> Q = new LinkedList<TreeNode>();
		List<Integer> res = new ArrayList<Integer>();
		if (root == null)return res;
		Q.add(root);
		size = 1;
		while (!Q.isEmpty()) {
			for (int i = 0; i < size; i++) {
				temp = Q.poll();
				if (temp.left != null)
					Q.add(temp.left);
				if (temp.right != null)
					Q.add(temp.right);
				if (i == size - 1)
					res.add(temp.val);
			}
			size = Q.size();
		}
		return res;
	}
}