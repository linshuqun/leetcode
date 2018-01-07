class Solution {
public:
    static bool myFun(vector<int> i, vector<int> j) {
        return (i[0] < j[0]);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int max = 0;
        sort(pairs.begin(), pairs.end(), myFun);
        int size = pairs.size();
        int dp[size];
        for (int i = 0; i < size; i++) dp[i] = 1;
        
        for (int i = 1; i < size; i++) {
            for (int j = 0; j < i; j++) {
                if (pairs[j][1] < pairs[i][0])
                    dp[i] = dp[i] > (dp[j] + 1) ? dp[i] : (dp[j] + 1);
                if (dp[i] > max) max = dp[i];
            }
        }
        
        return max;
    }
};
