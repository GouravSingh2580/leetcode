class Solution {
    public int[] findBall(int[][] grid) {
        int[] res = new int[grid[0].length];
        for(int i = 0; i < res.length; i++) {
            res[i] = fall(0, i, grid);
        }
        return res;
    }
    
    int fall(int r, int c, int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        if(r == m) return c;
        if(grid[r][c] == 1 && c == n - 1) return - 1;
        if(grid[r][c] == -1 && c == 0) return - 1;
        if(grid[r][c] == 1 && grid[r][c+1] == -1) return -1;
        if(grid[r][c] == -1 && grid[r][c-1] == 1) return -1;
        if(grid[r][c] == 1) return fall(r + 1, c + 1, grid);
        return fall(r + 1, c - 1, grid);
    }
}