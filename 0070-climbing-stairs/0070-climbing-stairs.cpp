class Solution {
public:
    int dp[1001];
    int climbStairs(int n) {
        if(n<=2) return dp[n]=n;
        
        if(dp[n]) return dp[n];
        return dp[n]= climbStairs(n-2)+climbStairs(n-1);
    }
};