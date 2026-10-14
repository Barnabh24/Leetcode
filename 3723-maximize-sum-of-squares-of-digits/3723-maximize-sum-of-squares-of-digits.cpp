class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > 9 * num) return "";
        int x = sum/9;
        int r = sum%9;

        string ans;

        ans.append(x,'9');

        if(r!=0) {
            ans.append(to_string(r));
        }

        if(ans.length() < num) {
            while(ans.length() != num) {
                ans += '0';
            }
        }
        return ans;
    }   
};