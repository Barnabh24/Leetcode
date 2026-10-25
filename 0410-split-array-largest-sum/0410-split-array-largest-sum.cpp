class Solution {
public:
    int countparts(vector<int>& arr, int m) {
        int parts = 1;
        long long sum = 0;
        for(int i=0; i<arr.size(); i++) {
            if(sum + arr[i] <= m) {
                sum += arr[i];
            }else {
                parts += 1;
                sum = arr[i];
            }
        }
        return parts;
    }
    
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int l = *max_element(nums.begin(), nums.end());
        int r = accumulate(nums.begin(), nums.end(), 0);
        while(l<=r) {
            int mid = (l+r)/2;
            int parts = countparts(nums,mid);
            if(parts > k) {
                l = mid+1;
            }else {
                r = mid-1;
            }
        }
        return l;
    }
};