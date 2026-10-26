class Solution {
public:
    double rec(double x, long long n) {
        if(n==0) {
            return 1;
        }

        double temp = rec(x,n/2);

        if(n%2==0) {
            return temp * temp;
        }
        return x * temp * temp;
    }
    
    double myPow(double x, int n) {
         long long N = llabs((long long)n);

         double ans = rec(x,N);
         if(n<0) {
            return 1/ans;
         }else {
            return ans;
         }
    }
};