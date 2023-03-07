class Solution
{
public:

    void solve(int i,vector<int> arr,int n,vector<int> &res,int sum){
        if(i==n){
            res.push_back(sum);
            return;
        }
        //take
        solve(i+1,arr,n,res,sum+arr[i]);
        //nottake
        solve(i+1,arr,n,res,sum);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> res;
        solve(0,arr,N,res,0);
        sort(res.begin(),res.end());
        return res;
    }
};
