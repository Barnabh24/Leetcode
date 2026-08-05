class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0;
        int sumB = 0;

        for(int i=0; i<aliceSizes.size(); i++) {
            sumA+=aliceSizes[i];
        }
        for(int i=0; i<bobSizes.size(); i++) {
            sumB+=bobSizes[i];
        }

        int diff = (sumB-sumA)/2;
        unordered_set<int>bob(bobSizes.begin(), bobSizes.end());

        for(int x: aliceSizes) {
            int y = x+diff;
            if(bob.count(y)) {
                return {x,y};
            }
        }
        return {};

    }
};