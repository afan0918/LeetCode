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
	vector<vector<int>> res;
	vector<int> tmp;
	void dfs(TreeNode* root, int targetSum,int sum) {
		if(!root) return;
		
		sum+=root->val;
		tmp.push_back(root->val);
		if(root->left==NULL&&root->right==NULL&&sum==targetSum){
			res.push_back(tmp);
		}
		
		dfs(root->left,targetSum,sum);
		dfs(root->right,targetSum,sum);
		tmp.pop_back();
	}
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root,targetSum,0);
		return res;
    }
};