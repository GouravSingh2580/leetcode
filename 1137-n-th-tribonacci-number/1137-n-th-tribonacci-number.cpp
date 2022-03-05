class Solution {
public:
    int dp[10001];
    int tribonacci(int n) {
        if(n<=1) return n;
        if(n==2) return 1;
        
        if(dp[n]) return dp[n];
        
        dp[n]= tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        return dp[n];
    }
};