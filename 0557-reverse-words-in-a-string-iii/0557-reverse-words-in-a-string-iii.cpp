class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;
        while(i<n) {
            int l =i;

            while(i<n && s[i] !=' ') {
                i++;
            }
                int r = i-1;
                while(l<r) {
                    swap(s[l],s[r]);
                    l++;
                    r--;
                }
                i++;
        }
        
        return s;
    }
};