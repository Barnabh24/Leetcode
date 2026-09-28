class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int x = 0;

        for(auto it:s) {
            if(it == '(') {
                x++;
            }else if(it == ')') {
                x--;
            }else {
                continue;
            }
            ans = max(ans, x);
        }
        return ans;
    }
};