class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
		if(nums.size()<3) return {};
		
		vector<vector<int>> res;
		vector<int> tmp;
		int left,right,target;
		
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
			left=i+1;right=nums.size()-1,target=-nums[i];
			while(left<right){
				if(nums[left]+nums[right]>target) 
					right--;
				else if(nums[left]+nums[right]<target) 
					left++;
				else {
					tmp={nums[i],nums[left],nums[right]};
					res.push_back(tmp);
					while(left<right&&nums[right]==tmp[2]) right--;
					while(left<right&&nums[left]==tmp[1]) left++;
				}
			}
			
			while(i<nums.size()-2&&nums[i]==nums[i+1]) i++;
		}
		
		sort(res.begin(),res.end());
		res.erase(unique(res.begin(),res.end()), res.end()); 
		return res;
    }
};