class Solution {
public:
    int days_reqd(vector<int> &a, int c) {
        int days = 1;
        int load = 0;
        for(int i=0; i<a.size(); i++) {
            if(load + a[i] > c) {
                load = a[i];
                days++;
            }else {
                load += a[i];
            }
        }
        return days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = weights[0];
        int sum = weights[0];
        for(int i=1; i<weights.size(); i++) {
            maxi = max(maxi,weights[i]);
            sum += weights[i];
        }
        
        int l = maxi;
        int r = sum;
        while(l<=r) {
            int mid = (l+r)/2;
            int num_of_days = days_reqd(weights,mid);
            if(num_of_days <= days) {
                r = mid-1;
            }else {
                l = mid+1;
            }
        }
        return l;
    }
};