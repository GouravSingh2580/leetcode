class Solution {
public:
    int dp[1001];
    int climbStairs(int n) {
        if(n<=2) return n;
        
        if(dp[n]) return dp[n];
        
        dp[n]= climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
};