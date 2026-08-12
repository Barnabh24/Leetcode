class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int maxLen = 0;
        int l = 0;
        for(int i=0; i<nums.size(); i++) {
            freq[nums[i]]++;

            while(freq[nums[i]] > k) {
                freq[nums[l]]--;
                l++;
            }
            maxLen = max(maxLen, i-l+1);
        }
        return maxLen;
    }
};