class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        int opencnt = 0;

        for(char c:s) {
            if(c== '(' || c == '*') {
                opencnt++;
            }else {
                opencnt--;
            }
            if(opencnt < 0) return false;
        }

        int closecnt = 0;
        for(int i=n-1; i>=0; i--) {
            if(s[i] == ')' || s[i]=='*') {
                closecnt++;
            }else {
                closecnt--;
            }
            if(closecnt < 0) return false;
        }
        return true;
    }
};