/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
	void dfs(vector<vector<int>> &res,Node* root,int step){
		if(!root) return;
		if(res.size()==step) res.push_back({});
		
		res[step].push_back(root->val);
		
		for(int i=0;i<root->children.size();i++){
			dfs(res,root->children[i],step+1);
		}
	}
public:
    vector<vector<int>> levelOrder(Node* root) {
		vector<vector<int>> res;
        dfs(res,root,0);
		return res;
    }
};