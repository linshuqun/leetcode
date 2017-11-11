class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        int size = nums.size();
        int i = 0;
        while (i < size) {
            if (nums[i] != nums[nums[i]-1])
                swap(nums[i], nums[nums[i] - 1]);
            else
                i++;
        }
        for (int i = 0; i < size; i++) {
            if (nums[i] != i + 1)
                result.push_back(nums[i]);
        }
        return result;
    }
};
