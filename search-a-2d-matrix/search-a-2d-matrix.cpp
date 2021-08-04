class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int i;
        for(i=0;i<matrix.size();i++){
			if(matrix[i][0]>target) break;
		}
		if(--i<0) return false;
        
		int left=0,right=matrix[i].size()-1,med;
		while(left<=right){
			med=left+right;
			if(matrix[i][med]>target){
				right=med-1;
			}else if(matrix[i][med]<target){
				left=med+1;
			}else{
				return true;
			}
		}
		return false;
    }
};