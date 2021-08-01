class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n));
		
		int num=1,i=0,j;
		while(num<=n*n){
			j=i;
			while(j<n-i) res[i][j++]=num++;
			j=i+1;
			while(j<n-i) res[j++][n-i-1]=num++;
			j=n-i-2;
			while(j>i) res[n-i-1][j--]=num++;
			j=n-i-1;
			while(j>i) res[j--][i]=num++;
			i++;
		}
		
		return res;
    }
};