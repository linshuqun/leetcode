class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size1 = s.size();
        int size2 = t.size();
        int sindex = 0;
        for (int i = 0; i < size2 && sindex < size1; i++) {
            if (t[i] == s[sindex]) sindex++;
        }
        return sindex == size1;
    }
};
