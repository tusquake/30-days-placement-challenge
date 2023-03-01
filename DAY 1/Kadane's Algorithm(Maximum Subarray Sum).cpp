class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int maxi=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         int sum=0;
        //         for(int k=i;k<=j;k++){
        //             sum=sum+nums[k];
        //             maxi=max(maxi,sum);
        //         }
        //     }
        // }
        // return maxi;
        // int maxi=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //             sum=sum+nums[j];
        //             maxi=max(maxi,sum);
        //     }
        // }
        // return maxi;
        int maxi=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};
