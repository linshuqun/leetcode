class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int dp[n+1];
        int count = 0;
        if (n == 0) return 1;
        if (n == 1) return 10;
        if (n == 2) return 91;
        dp[0] = 0;
        dp[1] = 10;
        dp[2] = 81;
        for (int i = 3; i <= n; i++) {
            if (11 - i > 0) dp[i] = dp[i-1] * (11 - i);
            else dp[i] = 0;
        }
        for (int i = 0; i <= n; i++) count += dp[i];
        return count;
    }
};
