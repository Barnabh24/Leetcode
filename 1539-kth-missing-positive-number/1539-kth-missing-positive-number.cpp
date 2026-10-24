class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>missing;
        int n = arr.size();
        if(arr[0] != 1) {
            for(int i=1; i<arr[0]; i++) {
                missing.push_back(i);
            }
        }
        for(int i=1; i<arr.size(); i++) {
            if(arr[i] - arr[i-1] > 1) {
                for(int j=arr[i-1] + 1; j<arr[i]; j++) {
                    missing.push_back(j);
                }
            }
        }
        for(int i = arr[n-1] + 1; i<=2000; i++) {
            missing.push_back(i);
        }
        return missing[k-1];
    }
};