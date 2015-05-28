/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root,int num){
        if(root==NULL)return 0;
          if(root->left==root->right) return 10*num+root->val;
          return dfs(root->left,num*10+root->val)+ dfs(root->right,num*10+root->val);
    }
	int sumNumbers(TreeNode* root) {
		return dfs(root, 0);
	}
};
