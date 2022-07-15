class Solution {
public:
    int dp(vector<vector<int>>&grid,int i, int j, int &c){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()) return 0;
        if(grid[i][j]==0) return 0;
        grid[i][j]=0;
        
        if(dp(grid,i-1,j,c)) c++;
        if(dp(grid,i+1,j,c)) c++;
        if(dp(grid,i,j+1,c)) c++;
        if(dp(grid,i,j-1,c)) c++;
        
        return 1;
    }
    int numIslands(vector<vector<char>>& g) {
        int m=g.size();
        int n=g[0].size();
        int ans=0;
        vector<vector<int>>grid;
        grid.resize(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=(g[i][j]-'0');
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int c=1;
                if(grid[i][j]){
                    dp(grid,i,j,c);
                    if(c) ans++;
                }
            }
        }
        return ans;
    }
};