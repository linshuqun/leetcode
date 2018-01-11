class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int size = nums.size();
        int dp[size][size];  // 表示i-j间player1获得的有效分数即player1-player2
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                if (i == j) dp[i][j] = nums[i];
                else dp[i][j] = 0;
        for (int i = size - 1; i >= 0; i--) {
            for (int j = i + 1; j < size; j++) {
                int a = nums[i] - dp[i+1][j];
                int b = nums[j] - dp[i][j-1];
                dp[i][j] = a >= b ? a : b;
            }
        }
        return dp[0][size - 1] >= 0;
    }
};
