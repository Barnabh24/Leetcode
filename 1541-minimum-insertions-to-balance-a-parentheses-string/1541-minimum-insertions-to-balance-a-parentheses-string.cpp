class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        int res = 0;
        stack<char>st;

        for(int i=0; i<n; i++) {
            char ch = s[i];

            if(ch == '(') {
                st.push(ch);
            }else {
                if(st.empty()) {
                    if(i<n-1 && s[i+1] == ')') {
                        i++;
                    }else {
                        res++;
                    }
                    res++;
                }else {
                    if(i<n-1 && s[i+1] == ')') {
                        i++;
                    }else {
                        res++;
                    }
                    st.pop();
                }
            }
        }
        return res + st.size()*2;
    }
};