class Solution {
public:
    int strStr(string heystack, string needle) {
        if(heystack.find(needle) != string :: npos) return heystack.find(needle);
        else return -1;
    }
};