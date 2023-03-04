class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
       sort(arr,arr+n);
        int mn=arr[0];
        int mx=arr[n-1];
        int res=mx-mn;
        for(int i=1;i<n;i++)
        {
            mx=max(arr[i-1]+k,arr[n-1]-k);
            mn=min(arr[i]-k,arr[0]+k);
            res=min(res,mx-mn);
        }
        return res;
    }
};
