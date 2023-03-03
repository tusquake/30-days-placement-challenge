class Solution {
public:
    //Recursion
    int solverecur(int m,int n){
        if(n==0&&m==0) return 1;
        if(n<0||m<0) return 0;
        return solverecur(m-1,n)+solverecur(m,n-1);
    }
    //Memoization
     int solve(int a,int b,vector<vector<int>> &dp){
        if(a==0&&b==0) return 1;
        if(a<0||b<0) return 0;
        if(dp[a][b]!=-1) return dp[a][b];
        return dp[a][b]=solve(a-1,b,dp)+solve(a,b-1,dp);
    }
    //Tabulation
    int solvetab(int m,int n){
        vector<vector<int>> dp(m+1,vector<int> (n+1,0));
        dp[0][0]=1;
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0&&j==0) continue;
                else{
                    int up=0,down=0;
                    if(i>0) up=dp[i-1][j];
                    if(j>0) down=dp[i][j-1];
                    dp[i][j]=up+down;
                }
            }
        }
        return dp[m][n];
    }
    

    int uniquePaths(int a, int b) {
        // vector<vector<int>> dp(a+1,vector<int>(b+1,-1));
        // // return solve(a-1,b-1,dp);
        // return solvetab(a-1,b-1);
         int N = a + b - 2;
            int r = b - 1; 
            double res = 1;
            
            for (int i = 1; i <= r; i++)
                res = res * (N - r + i) / i;
            return (int)res;
    }
};
