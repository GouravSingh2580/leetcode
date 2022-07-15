class Solution {
public:
    int ans(vector<vector<int>>&g, int i, int j, vector<vector<int>>&dp){
        if(i==g.size()-1 && j==g[0].size()-1) return 1;
        
        if(dp[i][j]) return dp[i][j];
        
        if(j<g[0].size()) dp[i][j]+= ans(g,i,j+1,dp);
        if(i<g.size()) dp[i][j]+= ans(g,i+1,j,dp);
        
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(101,vector<int>(101,0));
        vector<vector<int>>g(m,vector<int>(n,0));
        return ans(g,0,0,dp);
    }
};