class Solution {
public:
    int lcs(string& a, string& b, int n, int m, vector<vector<int>>&dp){
        if(n==0 || m==0) return 0;
        
        if(dp[n][m]!=-1) return dp[n][m];
        
        if(a[n-1] ==b[m-1]){
            return dp[n][m]= lcs(a,b,n-1,m-1,dp)+1;
        }
        else{
            return dp[n][m]= max(lcs(a,b,n-1,m,dp),lcs(a,b,n,m-1,dp));
        }
    }
    int longestCommonSubsequence(string t1, string t2) {
        vector<vector<int>>dp;
        dp.resize(t1.size()+1,vector<int>(t2.size()+1,-1));
        return lcs(t1,t2,t1.size(),t2.size(),dp);
    }
};