class Solution {
public:
    int knap(vector<int>& v, int n, int w, vector<vector<int>>&dp ){
        if(n==0) return 0;
        if(w==0) return 1;
        
        if(dp[n][w]!=-1) return dp[n][w];
        
        if(v[n-1]<=w){
            return dp[n][w]= knap(v,n,w-v[n-1],dp) + knap(v,n-1,w,dp);
        }
        else{
            return dp[n][w]= knap(v,n-1,w,dp);
        }
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp;
        dp.resize(coins.size()+1,vector<int>(amount+1,-1));
        return knap(coins, coins.size(), amount, dp);
    }
};