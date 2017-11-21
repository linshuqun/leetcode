class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int result = 0;
        int size = A.size();
        if (size < 3) {
            return 0;
        } else if (size == 3) {
            return (A[2] - A[1] == A[1] - A[0] ? 1 : 0);
        } else {
            int dp = 0;
            for (int i = 2; i < size; i++) {
                if (A[i] - A[i-1] == A[i-1] - A[i-2]) {
                    dp += 1;
                    result += dp;
                } else {
                    dp = 0;
                }
            }
            return result;
        }
    }
};
