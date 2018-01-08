class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        int dp[size+1]; //dp[i]表示到达i层的代价，要走完i全程，说明要到达i+1层
        dp[0] = 0;
        dp[1] = 0;
        for (int i = 2; i <= size; i++) {
            dp[i] = dp[i-1] + cost[i-1] < dp[i-2] + cost[i-2] ? dp[i-1] + cost[i-1] : dp[i-2] + cost[i-2];
        }
        return dp[size];
    }
};
