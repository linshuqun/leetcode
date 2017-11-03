class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size();
        int col = nums[0].size();
        
        if (r * c != row * col) return nums;
        vector<vector <int>> shape(r, vector<int>(c, 0));
        for (int i = 0; i < row * col; i++) {
            shape[i / c][i % c] = nums[i / col][i % col];
        }
        return shape;
    }
};
