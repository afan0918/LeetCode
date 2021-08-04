/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
	bool dfs(TreeNode* root,long long min,long long max) {
		if(!root) return true;
			
		bool l=dfs(root->left,min,root->val);
		bool r=dfs(root->right,root->val,max);
		if(!l||!r) return false;
		
		bool flag=true;
		if(root->left&&((root->left->val>=root->val)||(root->left->val<=min)))
			flag=false;
		if(root->right&&((root->right->val<=root->val)||(root->right->val>=max)))
			flag=false;
		
		return flag;
	}
public:
    bool isValidBST(TreeNode* root) {
        return dfs(root,LONG_MIN,LONG_MAX);
    }
};