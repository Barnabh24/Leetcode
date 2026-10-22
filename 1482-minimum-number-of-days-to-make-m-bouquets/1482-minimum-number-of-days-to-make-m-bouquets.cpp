class Solution {
public:
    bool possible(vector<int>&arr, int day, int m, int k) {
        int cnt = 0;
        int noofb = 0;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] <= day) {
                cnt++;
            }else {
                noofb += (cnt/k);
                cnt = 0;
            }
        }
        noofb += (cnt/k);
        return noofb >= m;
    }

    

    int minDays(vector<int>& bloomDay, int m, int k) {
       long long val = m * 1LL * k * 1LL;
       if(val > (long long)bloomDay.size()) return -1;
       int mini = INT_MAX, maxi = INT_MIN;
       for(int i=0; i<bloomDay.size(); i++) {
        mini = min(mini,bloomDay[i]);
        maxi = max(maxi, bloomDay[i]);
       }

       int l = mini;
       int r = maxi;
       while(l<=r){
        int mid = (l+r)/2;
        if(possible(bloomDay,mid,m,k)) {
            r = mid-1;
        }else {
            l = mid+1;
        }
       }
       return l;
    }   
};