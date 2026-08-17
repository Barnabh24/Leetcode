class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int p = 0;
        for(int i=n-1; i>=2; i--) {
            if(nums[i] < nums[i-1] + nums[i-2]) {
                int sum = nums[i] + nums[i-1] + nums[i-2];
                p = max(p,sum);
            }
        }

        return p;
    }
};