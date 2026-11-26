class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;
        bool win = true;
        while(n>=remove) {
            n-=remove;
            remove--;
            win = !win;
        }
        return !win;
    }
};