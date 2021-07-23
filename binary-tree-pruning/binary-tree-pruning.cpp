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
	bool dfs(TreeNode* root){
		if(!root) return true;
		
		bool left=dfs(root->left),right=dfs(root->right);
		
		if(left) root->left=NULL;
		if(right) root->right=NULL;
		
		if(left&&right&&root->val==0) return true;
		else return false;
	}
public:
    TreeNode* pruneTree(TreeNode* root) {
        bool cut=dfs(root);
        if(cut) return {};
		return root;
    }
};