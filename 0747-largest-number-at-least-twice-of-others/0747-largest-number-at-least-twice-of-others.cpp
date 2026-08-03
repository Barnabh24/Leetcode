class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = nums[0];
        int idx = 0;

        for(int i=1; i<nums.size(); i++) {
            if(nums[i] > maxi) {
                maxi = nums[i];
                idx = i;
            }
        }
        for(int i=0; i<nums.size(); i++) {
            if(i!=idx && maxi < 2*nums[i]) {
                return -1;
            }
        }
        return idx;
    }
};