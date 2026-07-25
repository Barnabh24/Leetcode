class Solution {
public:
    int maxProduct(int n) {
       vector<int>digits;
       while(n>0){
            int digit = n%10;
            digits.push_back(digit);
            n/=10;
       } 
       sort(digits.begin(),digits.end());
       int sz=digits.size();
       return digits[sz-1]*digits[sz-2];
    }
};