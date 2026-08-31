class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int evencnt = 0;
        int oddcnt = 0;

        for(int i=0; i<position.size(); i++) {
            if(position[i] % 2 == 0) {
                evencnt++;
            }else {
                oddcnt++;
            }
        }
        if(oddcnt > evencnt) {
            return evencnt;
        }else {
            return oddcnt;
        }
    }
};