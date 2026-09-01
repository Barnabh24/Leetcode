class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.rbegin(), boxTypes.rend(),
            [](const vector<int>& a, const vector<int>& b) {
                return b[1] > a[1];
            });
        
        int units = 0;

        for(auto& box : boxTypes) {
            if(box[0] <= truckSize) {
                units += box[0] * box[1];
                truckSize -= box[0];
            }else {
                units += truckSize * box[1];
                break;
            }
        }
        return units;
    }
};