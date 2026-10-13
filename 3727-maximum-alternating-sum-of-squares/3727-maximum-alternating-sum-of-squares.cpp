class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long>squares;

        for(int i=0; i<nums.size(); i++) {
            squares.push_back(nums[i]*nums[i]);
        }

        sort(squares.begin(), squares.end());

        long long score = 0;
        int cnt = n/2;

        for(int i=0; i<n; i++) {
            if(i<cnt) {
                score -= squares[i];
            }else {
                score += squares[i];
            }
        }
        return score;
    }
};