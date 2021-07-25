class Solution {
public:
    int jump(vector<int>& nums) {
		//if(nums.size()==1) return 0;
		
		int local = 0,tmp=INT_MIN;
        vector<int> dp(nums.size(),INT_MAX);
        dp[0]=0;
		
		for(int i=0;i<nums.size()-1;i++){
			for(int j=i+1;j<nums.size()&&j<=i+nums[i];j++){
				dp[j]=min(dp[i]+1,dp[j]);
			}
		}
		
		return dp[dp.size()-1];
    }
};