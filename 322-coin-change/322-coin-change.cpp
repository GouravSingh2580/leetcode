class Solution {
public:
    int ans(vector<int>& arr, int w, int n, vector<vector<int>>& dp){
        if(n == 0 || w == 0) return (w == 0 )? dp[w][n] = 0 : dp[w][n] =1e9;
        if(dp[w][n] != -1) return dp[w][n];
        if(arr[n-1] > w) return dp[w][n] =ans(arr, w, n-1, dp);
        else return dp[w][n] = min(ans(arr, w - arr[n-1], n, dp) + 1, ans(arr, w, n-1, dp));
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(amount+1, vector<int>(n+1,-1));
        int res=ans(coins, amount, n, dp);
        return res == 1e9 ? -1 : res; 
    }
};