class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        int j= 1;
        int cnt = 1;

        for(int i=1; i<n; i++) {
            if(nums[i] == nums[i-1]) {
                cnt++;
            }else {
                cnt = 1;
            }
            if(cnt <= k) {
                nums[j] = nums[i];
                j++;
            }
        }
        vector<int>ans(j);
        for(int i=0; i<j; i++) {
            ans[i] = nums[i];
        }
        return ans;
    }
};