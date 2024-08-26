class Solution {
public:
    bool check(vector<vector<int>> &grid, int row, int col){
        unordered_map<int, int>count;
        for(int i = 0;i < 3;i++){
            for(int j = 0;j < 3;j++){
                int num = grid[row + i][col + j];
                count[num]++;
            }
        }
        for(int i = 1;i <= 9;i++){
            if(count[i] != 1){
                return false;
            }
        }
        if(grid[row][col] + grid[row][col + 1] + grid[row][col + 2] != 15) return false;
        if(grid[row + 1][col] + grid[row + 1][col + 1] + grid[row + 1][col + 2] != 15) return false;
        if(grid[row + 2][col] + grid[row + 2][col + 1] + grid[row + 2][col + 2] != 15) return false;
        if(grid[row][col] + grid[row + 1][col] + grid[row + 2][col] != 15) return false;
        if(grid[row][col + 1] + grid[row + 1][col + 1] + grid[row + 2][col + 1] != 15) return false;
        if(grid[row][col + 2] + grid[row + 1][col + 2] + grid[row + 2][col + 2] != 15) return false;
        if(grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2] != 15) return false;
        if(grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col] != 15) return false;
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int ans = 0;
        if(grid.size() < 3 || grid[0].size() < 3){
            return 0;
        }
        for(int i = 0;i <= grid.size() - 3;i++){
            for(int j = 0;j <= grid[0].size() - 3;j++){
                if(grid[i + 1][j + 1] != 5){
                    continue;
                }
                if(check(grid, i, j)){
                    ans++;
                }
            }
        }
        return ans;
    }
};