class Solution {
public:
    // push dp (calculate next state from current state)
    
    bool isValid(int row, int col, int n, int m) {
        if(row < 0 || col < 0 || row >=n || col >=m ) return false;
        return true; 
    }
    int minPathSum(vector<vector<int>>& grid) {
      int row = grid.size();
      int col = grid[0].size();
      int dp[row + 2][col + 2];
      memset(dp, 0x3f, sizeof dp);
      dp[0][0] = grid[0][0];
      for(int i = 0 ; i < row ; i++) {
          for(int j = 0 ; j < col; j++) {
                
                if(isValid(i, j + 1, row, col)){
                  dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + grid[i][j + 1]);
                 }
                 if(isValid(i + 1, j , row , col)) {
                   dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + grid[i + 1][j]);
                 }
                 
          }
      }
        return dp[row - 1][col - 1];
    }
};