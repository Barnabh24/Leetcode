class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for(int i=0; i<n; i++) {
            int mini = INT_MAX;
            int AND = -1;

            for(int j=i; j<n; j++) {
                mini = min(mini,nums[j]);
                AND &= nums[j];

                if(AND == mini) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};