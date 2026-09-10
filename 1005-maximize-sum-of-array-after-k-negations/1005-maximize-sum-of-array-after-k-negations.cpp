class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size() && k>0; i++) {
            if(nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }else {
                break;
            }
        }
        int ans = 0;
        for(int i=0; i<nums.size(); i++) {
            ans+= nums[i];
        }

        if(k>0 && k%2 != 0) {
            int mini = *min_element(nums.begin(), nums.end());

            ans -= 2*mini;
        }
        return ans;
    }
};