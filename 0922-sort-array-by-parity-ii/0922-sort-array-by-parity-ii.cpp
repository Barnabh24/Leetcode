class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int>odd;
        vector<int>even;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                even.push_back(nums[i]);
            }else {
                odd.push_back(nums[i]);
            }
        }
        vector<int>ans(n);
        int l1 = 0;
        int l2 = 0;
        int r = 0;
        while(r<n) {
            if(r%2 == 0) {
                ans[r] = even[l1];
                l1++;
            }else {
                ans[r] = odd[l2];
                l2++;
            }
            r++;
        }
        return ans;
    }
};