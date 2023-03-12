class Solution {
public:
    void solve(vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans, int ind)
    {
        ans.push_back(ds);
        for(int i =ind;i<nums.size();i++)
        {
            if(i>ind && nums[i] == nums[i-1])
            {
                continue;
            }
            ds.push_back(nums[i]);
            solve(nums,ds,ans,i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int> ds;
        solve(nums,ds,ans,0);
        return ans;
    }
};
