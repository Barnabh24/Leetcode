class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi1 = 1;
        int maxi2 = 1;
        int l1 = 0;
        int n = nums.size();
        int r1 = 1;
        while(r1<n && l1<n) {
            if(nums[r1] > nums[r1-1]) {
                maxi1 = max(r1-l1+1,maxi1);
                r1++;
            }else {
                l1 = r1;
                r1++;
            }
        }

        int r2 = 1;
        int l2 = 0;
        while(l2<n && r2<n) {
            if(nums[r2] < nums[r2-1]) {
                maxi2 = max(r2-l2+1,maxi2);
                r2++;
            }else {
                l2 = r2;
                r2++;
            }
        }

        return max(maxi1,maxi2);
    }
};