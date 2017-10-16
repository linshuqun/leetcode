class Solution {
public:
    string reverseWords(string s) {
        vector<char> word;
        string reverse = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word.push_back(s[i]);
            } else {
                while (!word.empty()) {
                    reverse += word.back();
                    word.pop_back();
                }
                reverse += ' ';
            }
        }
        while (!word.empty()) {
            reverse += word.back();
            word.pop_back();
        }
        return reverse;
    }
};
