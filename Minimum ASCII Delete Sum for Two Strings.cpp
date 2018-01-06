class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int size1 = s1.size();
        int size2 = s2.size();
        
        int sum1 = 0;
        int sum2 = 0;
        
        int dp[size1+1][size2+1];
        dp[0][0] = 0;
        for (int i = 1; i <= size2; i++) dp[0][i] = dp[0][i-1] + (int)s2[i-1];
        for (int j = 1; j <= size1; j++) dp[j][0] = dp[j-1][0] + (int)s1[j-1];
        
        for (int i = 1; i <= size1; i++) {
            for (int j = 1; j <= size2; j++) {
                if (s1[i-1] == s2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = dp[i-1][j] + (int)s1[i-1] < dp[i][j-1] + (int)s2[j-1] ? dp[i-1][j] + (int)s1[i-1] : dp[i][j-1] + (int)s2[j-1];
            }
        }
        
        return dp[size1][size2];
    }
};
