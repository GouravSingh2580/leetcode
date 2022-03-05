class Solution {
public:
    int dp[10001];
    int fib(int n) {
        if(n<=1) return n;
        if(dp[n]) return dp[n];
        
        dp[n]= fib(n-1)+fib(n-2);
        return dp[n];
    }
};