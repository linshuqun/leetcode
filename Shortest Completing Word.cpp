class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<char> letters;
        // to lowercase
        for (int i = 0; i < licensePlate.size(); i++) {
            if (licensePlate[i] >= 'a' && licensePlate[i] <= 'z')
                letters.push_back(licensePlate[i]);
            else if (licensePlate[i] >= 'A' && licensePlate[i] <= 'Z')
                letters.push_back(licensePlate[i] + 32);
        }
        int i, j, index = 0;
        int max = 15;
        int size = letters.size();
        for (i = 0; i < words.size(); i++) {
            if (words.size() >= size) {
                int flag = size;
                vector<char> temp = letters;
                for (j = 0; j < words[i].size(); j++) {
                    vector<char>::iterator it = find(temp.begin(), temp.end(), words[i][j]);
                    if (it != temp.end()) {
                        temp.erase(it);
                        flag--;
                    }
                }
                if (flag <= 0) {
                    index = words[i].size() < max ? i : index;
                    max = words[i].size() < max ? words[i].size() : max;
                }
            }
        }
        return words[index];
    }
};
