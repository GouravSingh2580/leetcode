class Solution {
private:
    int mccs(vector<int>&c, int n, vector<int>&dp){
        if(n<=1) return 0;
        if(dp[n]) return dp[n];
        dp[n]= min(mccs(c,n-2,dp) +c[n-2], mccs(c,n-1,dp) +c[n-1]);
        return dp[n];
    }
public:
    int minCostClimbingStairs(vector<int>& c) {
        vector<int>dp(size(c)+1,0);
        return mccs(c,size(c),dp);
    }
};