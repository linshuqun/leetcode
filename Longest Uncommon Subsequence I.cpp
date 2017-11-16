class Solution {
public:
    int findLUSlength(string a, string b) {
        int size1 = a.size();
        int size2 = b.size();
        if (a == b)
            return -1;
        else
            return size1 > size2 ? size1 : size2;
    }
};
