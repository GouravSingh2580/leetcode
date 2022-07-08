class Solution {
public:
    int INF=1000001;
    int dfs(vector<int>&h, vector<vector<int>>&c, int m, int n, int target, int i, int nbr, int left,vector<vector<vector<int> > >&dp){
        if(i==m) return nbr==target? 0: INF;
        if(nbr>target) return INF;
        
        if(dp[i][nbr][left]!=-1) return dp[i][nbr][left];
        
        if(h[i]==0) {
            
            int ans=INF;
            for(int j=1;j<=n;j++){
                int new_nbr=nbr;
                if(j!=left) new_nbr=nbr+1;
                ans=min(ans, c[i][j-1]+ dfs(h,c,m,n,target,i+1,new_nbr,j,dp));
            }   return dp[i][nbr][left]= ans;
        }
        else  {
            
            int new_nbr=nbr;
            if(h[i]!=left) new_nbr=nbr+1;
            return dp[i][nbr][left]=dfs(h,c,m,n,target,i+1,new_nbr,h[i],dp);
        }
    }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        vector<vector<vector<int>>>dp(m+1, vector<vector<int>>(target+1, vector<int>(n+1,-1)));
        
        int ans=dfs(houses,cost,m,n,target,0,0,0,dp);
        return ans==INF? -1 : ans;
    }
};