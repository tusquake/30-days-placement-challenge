class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        // int x;
        // for(auto it:mp) {
        //     if(it.second>nums.size()/2) x= it.first;
        // }
        // return x;
         int c=0,me=0;
        for(int i=0;i<nums.size();i++){
            if(c==0) me=nums[i];
            if(nums[i]==me) c++;
            else c--;
        }
        return me;
    }
};
