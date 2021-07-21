class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
		vector<bool> res;
		int tmp=0;
		
        for(int i=0;i<nums.size();i++){
			tmp=tmp*2+nums[i];
			
			if(tmp%5==0) 
				res.push_back(true);
			else 
				res.push_back(false);
			
			tmp%=5;
		}
		
		return res;
    }
};