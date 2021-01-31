//gfg
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int i=0,j=M-1;
	    while(i<N && j>=0){
	        if(mat[i][j]==X){
	            return 1;
	        }
	        if(mat[i][j]>X){
	            j--;
	        }
	        else{
	            i++;
	        }
	    }
	    return 0;
	}
};
//leetcode
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n=matrix.size();
        int m=matrix[0].size();
        if(n==0){
            return false;
        }
        int lo=0;
        int hi=(n*m)-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            if(matrix[mid/m][mid%m]<target){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
         return false;
    }
};