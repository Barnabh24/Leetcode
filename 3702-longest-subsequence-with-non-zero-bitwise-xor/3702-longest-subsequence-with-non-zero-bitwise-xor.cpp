class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorvalue = 0;
        bool nonzero = false;

        for(int x:nums) {
            xorvalue ^= x;

            if(x!=0) {
                nonzero = true;
            }
        }

        if(xorvalue != 0) {
            return nums.size();
        }

        if(nonzero) {
            return nums.size() - 1;
        }
        return 0;
    }
};