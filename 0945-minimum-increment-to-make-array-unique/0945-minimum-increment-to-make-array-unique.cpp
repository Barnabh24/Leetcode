class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l = 1;
        int cnt = 0;
        while(l<n) {
            if(nums[l] <= nums[l-1]) {
                int diff = abs(nums[l]-nums[l-1]);
                nums[l] = nums[l] + (diff + 1);
                cnt+=diff+1;
            }
            l++;
        }
        return cnt;
    }
};