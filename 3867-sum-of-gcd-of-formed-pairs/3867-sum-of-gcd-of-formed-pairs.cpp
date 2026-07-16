class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>mx(n,nums[0]);
        int maxi = nums[0];
        for(int i=1; i<n; i++) {
            if(nums[i] > maxi) {
                maxi = nums[i];
                mx[i] = maxi;
            }else {
                mx[i] = maxi;
            }
        }


        vector<long long> prefixGcd(n);
        for(int i=0; i<n; i++) {
            prefixGcd[i] = gcd(nums[i], mx[i]);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        long long sum = 0;

        int l=0;
        int r = n-1;

        while(l<r) {
            sum += gcd(prefixGcd[l], prefixGcd[r]);
            l++;
            r--;
        }

        return sum;

    }
};