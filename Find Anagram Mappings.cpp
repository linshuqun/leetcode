class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        map<int, int> hash;
        for (int i = 0; i < B.size(); i++) {
            hash[B[i]] = i;
        }
        vector<int> result;
        for (int i = 0; i < A.size(); i++) {
            result.push_back(hash[A[i]]);
        }
        return result;
    }
};
