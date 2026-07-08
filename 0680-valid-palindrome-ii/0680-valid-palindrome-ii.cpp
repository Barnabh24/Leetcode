class Solution {
public:
    bool isPalindrome(const string &s,int left,int right) {
        while(left < right) {
            if(s[left++] != s[right--] ) {
                return false;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int n = s.length();
        int l = 0;
        int r = n-1;

        while(l<r) {
            if(s[l] != s[r]) {
                return isPalindrome(s, l+1, r) || isPalindrome(s,l,r-1);
            }
            l++;
            r--;
        }

        return true;

    }
};