class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v;
        int one=0,zero=0,two=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            else if(nums[i]==1) one++;
            else two++;
        }
        nums.clear();
        for(int i=0;i<zero;i++) nums.push_back(0);
        for(int i=zero;i<one+zero;i++) nums.push_back(1);
        for(int i=one;i<two+one;i++) nums.push_back(2);
        // for(int i=0;i<v.size();i++) nums[i]=v[i];
    }
};
