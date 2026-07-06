class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>&a, const vector<int>&b) {
            if(a[0] == b[0]) {
                return a[1] > b[1];
            }
            return a[0] < b[0];
        });

        int rem = 0;
        int max_end = -1;

        for(const auto& interval: intervals) {
            if(interval[1] > max_end) {
                rem ++;
                max_end = interval[1];
            }
        }

        return rem;

    }
};