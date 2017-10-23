class Solution {
public:
    string reverseString(string s) {
        string re = "";
        for (int i = s.size() - 1; i >= 0; i--)
            re += s[i];
        return re;
    }
};
