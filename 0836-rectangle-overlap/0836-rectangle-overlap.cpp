class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int left1x = rec1[0];
        int left1y = rec1[1];
        int right1x = rec1[2];
        int right1y = rec1[3];

        int left2x = rec2[0];
        int left2y = rec2[1];
        int right2x = rec2[2];
        int right2y = rec2[3];

        if(left2x >= right1x) return false;
        if(left1x >= right2x) return false;

        if(left2y >= right1y) return false;
        if(left1y >= right2y) return false;

        return true;
    }
};