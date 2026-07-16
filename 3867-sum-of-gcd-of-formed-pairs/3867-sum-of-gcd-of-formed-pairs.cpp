class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1;
        vector<long long> prefixGcd(n);
        for(int i=0; i<n; i++) {
            maxi = max(maxi,nums[i]);
            prefixGcd[i] = gcd(nums[i], maxi);
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