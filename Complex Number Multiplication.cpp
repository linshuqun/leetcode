class Solution {
public:
    struct complexNumber {
        int x;
        int y;
    };
    
    complexNumber getNumber(string s) {
        complexNumber number;
        number.x = 0;
        number.y = 0;
        vector<int> temp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] ==  '+') {
                int count = 0;
                while (!temp.empty()) {
                    if (temp.back() == -1) {
                        number.x *= -1;
                    } else {
                        number.x += temp.back() * pow(10, count);
                        count += 1;
                    }
                    temp.pop_back();
                }
            } else if (s[i] == 'i') {
                int count = 0;
                while (!temp.empty()) {
                    if (temp.back() == -1) {
                        number.y *= -1;
                    } else {
                        number.y += temp.back() * pow(10, count);
                        count += 1;
                    }
                    temp.pop_back();
                }
            } else {
                if (s[i] == '-')
                    temp.push_back(-1);
                else
                    temp.push_back(s[i] - '0');
            }
        }
        return number;
    }
    
    string complexNumberMultiply(string a, string b) {
        int re1, im1;   // string a
        int re2, im2;   // string b
        complexNumber aNumber = getNumber(a);
        complexNumber bNumber = getNumber(b);
        
        re1 = aNumber.x;
        im1 = aNumber.y;
        re2 = bNumber.x;
        im2 = bNumber.y;
        
        // for result
        int re = re1 * re2 - im1 * im2;
        int im = im1 * re2 + re1 * im2;
        
        stringstream result;
        result << re << "+" << im << "i";
        
        return result.str();
    }
};
