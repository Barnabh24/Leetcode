class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int mini = 0;
        for(int i=0; i<k; i++) {
            mini += nums[i];
        }

        int maxi = 0;
        for(int i=n-1; i>=n-k; i--) {
            maxi += nums[i];
        }
        return abs(maxi-mini);
    }
};