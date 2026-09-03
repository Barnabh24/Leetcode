class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int mini = nums1[0];
        int even_cnt = 0;
        int odd_cnt = 0;
        for(int i=0; i<n; i++) {
            if(nums1[i] % 2 == 0) {
                even_cnt++;
            }else {
                odd_cnt++;
            }
        }

        for(int i=1; i<n; i++) {
            mini = min(mini,nums1[i]);
        }

        if(even_cnt == n || odd_cnt == n) {
            return true;
        }
        if(mini % 2 != 0) {
            return true;
        }
        return false;
    }
};