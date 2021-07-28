class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
		int N = 500005;
        vector<bool> flag(N,0);
		
		for(int i=0;i<nums.size();i++){
			if(N>nums[i]&&nums[i]>0){
				flag[nums[i]]=1;
			}
		}
		
		for(int i=1;i<N;i++){
			if(!flag[i]) return i;
		}
		
		return -1;//爆ㄌ
    }
};