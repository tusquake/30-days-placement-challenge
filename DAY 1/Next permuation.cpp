class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> nums){
        // int k,l;
        // for(k=n-2;k>=0;k--){
        //     if(nums[k]<nums[k+1]) break;
        // }
        // if(k<0) {
        //     reverse(nums.begin(),nums.end());
        //     return nums;}
        // else{
        //     for(l=n-1;l>k;l--){
        //         if(nums[l]>nums[k]) break;
        //     }
        //     swap(nums[k],nums[l]);
        //     reverse(nums.begin()+k+1,nums.end());
        //     return nums;
        // }
        // return {};
        next_permutation(nums.begin(),nums.end());
        return nums;
    }
};
