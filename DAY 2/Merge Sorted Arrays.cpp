class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        for(int i=0;i<m;i++){
            v.push_back(nums1[i]);
        }
        for(int j=0;j<n;j++){
            v.push_back(nums2[j]);
        }
        for(int k=0;k<m+n;k++){
            nums1[k] = v[k];
        }
        sort(nums1.begin(),nums1.end());
    }
};
