class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int island = 0, neighbor = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    island += 1;
                    if ((i < grid.size() - 1) && grid[i+1][j]) neighbor += 1;
                    if ((j < grid[0].size() - 1) && grid[i][j+1]) neighbor += 1;
                }
            }
        }
        int perimeter = island * 4 - neighbor * 2;
        return perimeter;
    }
};
