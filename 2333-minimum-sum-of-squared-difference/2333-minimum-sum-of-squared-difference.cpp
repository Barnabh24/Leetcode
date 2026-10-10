class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector<int>d(1000001,0);
        int mx = 0;
        long long sum = 0;
        long long k = k1+k2;

        for(int i=0; i<n; i++) {
            int x = abs(nums1[i]- nums2[i]);
            d[x]++;
            sum += x;
            mx = max(mx,x);
        }

        if(sum <= k) {
            return 0;
        }

        for(int i=mx; i>0 && k>0; i--) {
            long long m = min(k,(long long)d[i]);
            d[i] -= m;
            d[i-1] +=m;
            k-=m;
        }

        long long ans = 0;
        for(int i=0; i<=mx; i++) {
            ans += (long long)i * i * d[i];
        }
        return ans;

    }
};