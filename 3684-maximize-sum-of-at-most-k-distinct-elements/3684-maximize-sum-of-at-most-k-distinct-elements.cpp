class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int, greater<int>>st(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            st.insert(nums[i]);
        }

        vector<int>ans;

        for(int x:st) {
            if(ans.size() == k) {
                break;
            }
            ans.push_back(x);
        }
        return ans;


    }
};