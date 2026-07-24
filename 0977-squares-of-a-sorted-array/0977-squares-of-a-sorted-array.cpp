class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int k = n-1;
        int l=0;
        int r = n-1;
        while(l<=r) {
            if((nums[l]*nums[l]) > nums[r]*nums[r]) {
                ans[k] = nums[l]*nums[l];
                l++;
                k--;
            }else {
                ans[k] = nums[r]*nums[r];
                r--;
                k--;
            }
        }
        return ans;

    }
};