class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
		if(nums.size()==0) return 0;
		int left=nums[0],max=nums[0],res=1;
        for(int i=0;i<nums.size();i++){
			if(nums[i]<left){
				left=max;
				res=i+1;
			}else if(nums[i]>max){
				max=nums[i];
			}
		}
		return res;
    }
};