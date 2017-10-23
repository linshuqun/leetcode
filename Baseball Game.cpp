class Solution {
public:
    int getNum(string& s) {
        int num;
        stringstream ss;
        ss << s;
        ss >> num;
        return num;
    }
    int calPoints(vector<string>& ops) {
        int sum = 0;
        vector<int> round;
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == "C") {
                sum -= round.back();
                round.pop_back();
            } else if (ops[i] == "D") {
                int temp = 2 * round.back();
                round.push_back(temp);
                sum += temp;
            } else if (ops[i] == "+") {
                int index = round.size() - 1;
                int temp = round[index] + round[index-1];
                round.push_back(temp);
                sum += temp;
            } else {
                int temp = getNum(ops[i]);
                sum += temp;
                round.push_back(temp);
            }
        }
        return sum;
    }
};
