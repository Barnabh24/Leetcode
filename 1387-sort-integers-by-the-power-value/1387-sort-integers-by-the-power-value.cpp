class Solution {
public:
    int helper(int x) {
        int cnt = 0;
        while(x!=1) {
            if(x%2==0) {
                x/=2;
            }else {
                x = 3*x+1;
            }
            cnt++;
        }
        return cnt;
    }
    
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>ans;

        for(int i=lo; i<=hi; i++) {
            ans.push_back({helper(i), i});
        }
        sort(ans.begin(), ans.end());

        return ans[k-1].second;
    }
};