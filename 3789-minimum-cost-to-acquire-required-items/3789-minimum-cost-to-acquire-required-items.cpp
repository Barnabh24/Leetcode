class Solution {
public:
    long long minimumCost(long long cost1, long long cost2, long long costBoth, long long need1, long long need2) {
        long long total = 0;
        if(costBoth < (cost1+cost2)) {
            total += min(need1, need2) * costBoth;
        }else {
            long long n = min(need1, need2);
            total += n*cost1 + n*cost2;
        }

        long long mini = min(need1, need2);
        long long rem1 = need1-mini;
        long long rem2 = need2-mini;

        total += rem1 * min(cost1,costBoth);
        total += rem2*min(cost2, costBoth);

        return total;
    }
};