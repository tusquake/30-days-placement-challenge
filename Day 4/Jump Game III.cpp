class Solution {
public:

     bool helper(int i,vector<int> &v,vector<int> &dp){
         if(i<0 || i>=v.size()) return false;
         if(v[i]==0) return true;
         if(dp[i]!=-1) return dp[i];
         dp[i]=false;
        return dp[i]=(helper(i-v[i],v,dp)||helper(i+v[i],v,dp));
     }
    bool canReach(vector<int>& nums, int start) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return helper(start,nums,dp);
    }
};
