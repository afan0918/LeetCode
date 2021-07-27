class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
		int res=1e5;
		int tmp;
		int left,right;
		
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
			left=i+1;right=nums.size()-1;
			while(left<right){
				tmp=nums[i]+nums[left]+nums[right];
				res=abs(res-target)<abs(tmp-target)?res:tmp;
				if(tmp>target) {
					right--;
				}else if(tmp<target) {
					left++;
				}else 
					return target;
			}
			
			while(i<nums.size()-2&&nums[i]==nums[i+1]) i++;
		}

		return res;
    }
};