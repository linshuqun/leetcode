class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int i = left; i <= right; i++) {
            int m = i;
            int temp;
            bool flag = true;
            while (m) {
                temp = m % 10;
                m /= 10;
                if (temp == 0 || i % temp != 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) result.push_back(i);
        }
        return result;
    }
};
