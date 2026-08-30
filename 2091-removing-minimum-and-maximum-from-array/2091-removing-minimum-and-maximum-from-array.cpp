class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) {
            return n;
        }

        int mini = 0;
        int maxi = 0;

        for(int i=1; i<nums.size(); i++) {
            if(nums[i] < nums[mini]) {
                mini = i;
            }

            if(nums[i] > nums[maxi]) {
                maxi = i;
            }
        }
        int left = min(mini,maxi);
        int right = max(mini,maxi);

        int fromleft = right + 1;
        int fromright = n - left;
        int both = (left + 1) + (n-right);

        return min({fromleft,fromright,both});
    }
};