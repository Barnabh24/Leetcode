class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        int n = s1.length();

        int cnt = 0;
        int same = 0;
        for(int i=0; i<s1.length(); i++) {
            if(s1[i]-'a' > s2[i]-'a') {
                continue;
            }else if(s1[i] -'a' == s2[i]-'a') {
                same++;
            }
            else {
                cnt++;
            }
        }

        if(cnt == 0 || cnt == n-same) {
            return true;
        }else {
            return false;
        }
    }
};