class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long final_num = 0;
        long long place = 1;

        while(n>0) {
            int digit = n%10;
            if(digit != 0) {
                sum += digit;
                final_num += digit*place;
                place *= 10;
            }
            n/=10;
            
        }

        return final_num * sum;
    }
};