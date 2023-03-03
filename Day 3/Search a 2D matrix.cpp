class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Brute Force(Linear Search)
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(target==matrix[i][j]) return true;
        //     }
        // }
        // return false;

        //OPTIMIZED(Binary Search)
       int n=matrix.size(),m=matrix[0].size(),l=0,h=(m*n-1),mid;
       while(l<=h){
           mid=(l+h)/2;
           if(matrix[mid/m][mid%m]==target) return true;
           else if(matrix[mid/m][mid%m]<target) l=mid+1;
           else h=mid-1;
       }
       return false;
    }
};
