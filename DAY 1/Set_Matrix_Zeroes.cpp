class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int row=matrix.size(),col=matrix[0].size();
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         if(matrix[i][j]==0){
        //             int ind=i-1;
        //             while(ind>=0){
        //                 if(matrix[ind][j]!=0){
        //                     matrix[ind][j]=-1;
        //                 }
        //                 ind--;
        //             }
        //             ind=i+1;
        //             while(ind<row){
        //                 if(matrix[ind][j]!=0){
        //                     matrix[ind][j]=-1;
        //                 }
        //                 ind++;
        //             }
        //             ind=j-1;
        //             while(j>=0){
        //                 if(matrix[i][ind]!=0){
        //                     matrix[i][ind]=-1;
        //                 }
        //                 ind--;
        //             }
        //             ind=j+1;
        //             while(ind<col){
        //                 if(matrix[i][ind]!=0){
        //                     matrix[i][ind]=-1;
        //                 }
        //                 ind++;
        //             }
        //         }
        //     }
        // }
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         if(matrix[i][j]==-1){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
//         int rows = matrix.size(), cols = matrix[0].size();
//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < cols; j++) {
//       if (matrix[i][j] == 0) {

//         int ind = i - 1;
//         while (ind >= 0) {
//           if (matrix[ind][j] != 0) {
//             matrix[ind][j] = -1;
//           }
//           ind--;
//         }
//         ind = i + 1;
//         while (ind < rows) {
//           if (matrix[ind][j] != 0) {
//             matrix[ind][j] = -1;
//           }
//           ind++;
//         }
//         ind = j - 1;
//         while (ind >= 0) {
//           if (matrix[i][ind] != 0) {
//             matrix[i][ind] = -1;

//           }
//           ind--;
//         }
//         ind = j + 1;
//         while (ind < cols) {
//           if (matrix[i][ind] != 0) {
//             matrix[i][ind] = -1;

//           }
//           ind++;
//         }
//       }
//     }
//   }
//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < cols; j++) {
//       if (matrix[i][j] <= 0) {
//         matrix[i][j] = 0;
//       }
//     }
//   }
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int> dummy1(n,-1),dummy2(m,-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!matrix[i][j]){
                dummy1[i]=0;
                dummy2[j]=0;
            }
        }
    } 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!dummy1[i]||!dummy2[j]) matrix[i][j]=0;
        }
    } 
    }
};
