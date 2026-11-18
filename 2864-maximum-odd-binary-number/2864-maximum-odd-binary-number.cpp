class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.length();
        string ans(n,'0');

        int cnt = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '1') {
                cnt++;
            }
        }

        ans[n-1] = '1';
        cnt--;
        for(int i=0; i<cnt; i++) {
            ans[i] = '1';
        }
        return ans;
    }
};