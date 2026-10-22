class Solution {
public:
    int divide_sum(vector<int>& a, int k) {
        int sum = 0;
        for(int i=0; i<a.size(); i++) {
            sum += ceil((double)a[i]/(double)k);
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
       int n = nums.size();
       int maxi = 0;
       for(int i=0; i<n; i++) {
        maxi = max(maxi,nums[i]);
       } 

       int l = 1;
       int r = maxi;
       int ans = INT_MAX;

       while(l<=r) {
            int mid = (l+r)/2;
            if(divide_sum(nums,mid) <= threshold) {
                ans = min(ans,mid);
                r = mid-1;
            }else {
                l = mid+1;
            }
       }
       return ans;
       
    }
};