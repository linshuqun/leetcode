class Solution {
public:
    int integerBreak(int n) {
        if (n == 2 || n == 3) return n - 1;
        int res = 1;
        while (n > 4) {
            res *= 3;
            n -= 3;
        }
        return res * n;
    }
};
// dp solution
class Solution {
public:
    int integerBreak(int n) {
        int dp[n+1];
        dp[0] = dp[1] = dp[2] = 1;
        for (int i = 3; i <= n; i++) {
            dp[i] = 0;
            for (int j = 2; j <= i /2; j++) {
                int temp = dp[i-j] > (i - j) ? j * dp[i-j] : j * (i - j);
                if (temp > dp[i]) dp[i] = temp;
            }
        }
        return dp[n];
    }
};
