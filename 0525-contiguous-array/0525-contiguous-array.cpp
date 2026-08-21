class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>cnt_map;

        cnt_map[0] = -1;

        int cnt = 0;
        int max_len = 0;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 1) {
                cnt++;
            }else {
                cnt--;
            }

            if(cnt_map.find(cnt) != cnt_map.end()) {
                max_len = max(max_len, i-cnt_map[cnt]);
            }else {
                cnt_map[cnt] = i;
            }
        }
        return max_len;

    }
};