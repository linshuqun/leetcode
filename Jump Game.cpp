class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int reach = nums[0]; // 表示当前能到达的最远目标
        for (int i = 1; i < size && i <= reach; i++) {
            if (i + nums[i] > reach) reach = i + nums[i];
        }
        return reach >= size - 1;
    }
};
