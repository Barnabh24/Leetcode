class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0;
        int r = 1;
        vector<int>arr;
        while(r<n) {
            arr.push_back(nums[r]);
            arr.push_back(nums[l]);
            l+=2;
            r+=2;
        }
        return arr;
    }

};