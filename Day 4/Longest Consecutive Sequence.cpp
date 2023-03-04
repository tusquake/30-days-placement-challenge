class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      //Brute Force
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int prev=nums[0],ans=1,cur=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev+1) cur++;
            else if(nums[i]!=prev) cur=1;
            prev=nums[i];
            ans=max(cur,ans);
        }
        return ans;
      
      //Optimized
        // if(nums.size()==0) return 0;
        // set<int> s;
        // for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        // int len=1,maxi=1;
        // for(auto it:s){
        //     if(s.find(it+1)!=s.end()){
        //         len++;
        //         maxi=max(len,maxi);
        //     }
        //     else{
        //         len=1;
        //     }
        // }
        // return maxi;
    }
};
