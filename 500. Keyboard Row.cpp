class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int mark[26] = {2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        vector<string> result;
        for (int i = 0; i < words.size(); i++) {
            bool isOneRow = true;
            for (int j = 1; j < words[i].size(); j++) {
                int index1 = (words[i][j-1] - 'a' >= 0) ? (words[i][j-1] - 'a') : (words[i][j-1] - 'A');
                int index2 = (words[i][j] - 'a' >= 0) ? (words[i][j] - 'a') : (words[i][j] - 'A');
                if (mark[index1] != mark[index2]) {
                    isOneRow = false;
                    break;
                }
            }
            if (isOneRow)
                result.push_back(words[i]);
        }
        
        return result;
    }
};
