class Solution {
public:
    int minSteps(int n) {
        int dp[n+1]; // 表示获得长度i的最小步数
        dp[0] = dp[1] = 0;
        for (int i = 2; i <= n; i++) {
            dp[i] = i;
            for (int j = i - 1; j > 1; j--) {
                if (i % j == 0) {
                    dp[i] = dp[j] + i / j;
                    break;
                }
            }
            
        }
        return dp[n];
    }
};
