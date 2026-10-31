class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total = 0;
        for(int i=0; i<apple.size(); i++) {
            total += apple[i];
        }
        sort(capacity.rbegin(), capacity.rend());
        int cnt = 0;
            for(int i=0; i<capacity.size(); i++) {
                total -= capacity[i];
                cnt++;

                if(total <= 0) {
                    break;
                }
            }
        
        return cnt;
        
    }
};