class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        int size = s.size();
        int left, right;
        for (int i = 0; i < size; i++) {
            count++;
            // odd
            left = i - 1;
            right = i + 1;
            while (left >= 0 && right <= size - 1 && s[left] == s[right]) {
                left--;
                right++;
                count++;
            }
            // even
            left = i;
            right = i + 1;
            while (left >= 0 && right <= size - 1 && s[left] == s[right]) {
                left--;
                right++;
                count++;
            }
        }
        return count;
    }
};
