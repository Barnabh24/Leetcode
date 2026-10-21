class Solution {
public:
    int maxi_element(vector<int>&a) {
        int maxi = a[0];
        int n = a.size();
        for(int i=0; i<n; i++) {
            maxi = max(maxi,a[i]);
        }
        return maxi;
    }
    double time_reqd(vector<int>& a, int x) {
        double total_time = 0;
        for(int i=0; i<a.size(); i++) {
            total_time += ceil(double(a[i])/double(x));
        }
        return total_time;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 0;
        int r = maxi_element(piles);
        int ans = INT_MAX;
        while(l<=r) {
            int mid = (l+r)/2;
            if(time_reqd(piles,mid) <= h) {
                ans = min(ans,mid);
                r = mid-1;
            }else {
                l = mid+1;
            }
        }
        return ans;
    }
};