class Solution {
public:
    int findComplement(int num) {
        int result = 0;
        int exp = 0;
        while (num) {
            int temp = !(num & 1);
            result += (pow(2, exp) * temp);
            exp += 1;
            num >>= 1;
        }
        return result;
    }
};
