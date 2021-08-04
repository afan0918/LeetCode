class Solution {
private:
	void dfs(vector<vector<int>> &res,vector<int> &tmp,int start,int end,int step,int lenght){
		if(step==lenght){
			res.push_back(tmp);
			return;
		}
		
		for(int i=start+1;i<=end;i++){
			tmp.push_back(i);
			dfs(res,tmp,i,end,step+1,lenght);
			tmp.pop_back();
		}
	}
public:
    vector<vector<int>> combine(int n, int k) {
		vector<vector<int>> res;
		vector<int> tmp;
        dfs(res,tmp,0,n,0,k);
		return res;
    }
};