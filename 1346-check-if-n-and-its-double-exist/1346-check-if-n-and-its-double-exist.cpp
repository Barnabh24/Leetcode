class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        unordered_set<int>st;

        for(int x:nums) {
            if(st.count(2*x) || (x%2==0 && st.count(x/2))) {
                return true;
            }

            st.insert(x);
        }

        return false;
    }
};