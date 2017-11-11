class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> s;
        map<int, int> greater;
        for (int i = 0; i < nums.size(); i++) {
            while (s.size() && s.back() < nums[i]) {
                greater[s.back()] = nums[i];
                s.pop_back();
            }
            s.push_back(nums[i]);
        }
        
        vector<int> result;
        for (int i = 0; i < findNums.size(); i++) {
            result.push_back(greater.count(findNums[i]) ? greater[findNums[i]] : -1);
        }
        return result;
    }
};
