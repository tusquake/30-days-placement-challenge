class Solution {
public:

    void findc(int ind,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            findc(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }

        findc(ind+1,target,arr,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidate, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findc(0,target,candidate,ans,ds);
        return ans;
    }
};
