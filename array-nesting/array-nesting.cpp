class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int res = 0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] != -1){
                res = max(res, dfs(nums, i));
            }
        }
        return res;
    }
private: 
    int dfs(vector<int>& nums, int i){
        if(nums[i] != -1){
            int next = nums[i];
            nums[i] = -1;
            return 1 + dfs(nums, next);
        }
        return 0;
    }
};