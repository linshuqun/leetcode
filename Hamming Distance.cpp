class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = x ^ y;
        int count = 0;
        while (result >0) {
            if ((result) & 1 == 1)
                count++;
            result >>= 1;
        }
        return count;
    }
};
