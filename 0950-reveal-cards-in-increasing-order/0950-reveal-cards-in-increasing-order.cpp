class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        int n = deck.size();

        queue<int>idx;
        for(int i=0; i<n; i++) {
            idx.push(i);
        }

        vector<int>ans(n);
        for(int i=0; i<n; i++) {
            int index = idx.front();
            idx.pop();
            ans[index] = deck[i];

            if(!idx.empty()) {
                idx.push(idx.front());
                idx.pop();
            }
        }

        return ans;

    }
};