class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
		int high=0,low,tmp;
		int res=0;
		
		while(l<r){
			tmp=height[l]>height[r]?r--:l++;
			low=height[tmp];
			high=max(high,low);
			res+=(high-low);
		}
		
		return res;
    }
};