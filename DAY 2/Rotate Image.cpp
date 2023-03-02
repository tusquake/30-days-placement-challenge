//Extra Space O(n*n)
        // int n=matrix.size();
        // vector<vector<int>> v(n,vector<int> (n,0));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         v[j][n-i-1]=matrix[i][j];
        //     }
        // }
        // matrix.clear();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         matrix[i][j]=v[i][j];
        //     }
        // }
    //    reverse(matrix.begin(),matrix.end());
    //     int n=matrix.size();
    //     for(int i=0; i<n; i++){
    //         for(int j=i+1; j<n; j++){
    //             swap(matrix[i][j],matrix[j][i]);
    //         }
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
