class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>freq(26);
        int l = 0;
        int maxLen = 0;
        for(int i=0; i<s.length(); i++) {
            freq[s[i]-'a']++;

            while(freq[s[i]-'a'] > 2) {
                freq[s[l++]-'a']--;
            }
            maxLen = max(maxLen,i-l+1);
        }
        return maxLen;
    }
};