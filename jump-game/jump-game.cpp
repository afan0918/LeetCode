class Solution {
public:
    bool canJump(vector<int>& nums) {
		int tmp=0,i=0;
		for(;i<nums.size()&&i<=tmp;i++){
			tmp=max(tmp,i+nums[i]);
		}
        return i==nums.size();
    }
};