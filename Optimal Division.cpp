class Solution {
public:
    string intToString(int n) {
        string temp;
        stringstream ss;
        ss << n;
        ss >> temp;
        return temp;
    }
    string optimalDivision(vector<int>& nums) {
        string result = "";
        if (nums.size() == 1) {
            result += intToString(nums[0]);
        } else if (nums.size() == 2) {
            result += (intToString(nums[0]) + "/" + intToString(nums[1]));
        } else {
            result += (intToString(nums[0]) + "/(" + intToString(nums[1]));
            for (int i = 2; i < nums.size(); i++) {
                result += ("/" + intToString(nums[i]));
            }
            result += ")";
        }
        return result;
    }
};
