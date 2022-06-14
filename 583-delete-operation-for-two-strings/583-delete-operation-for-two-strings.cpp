class Solution {
public:
    int sol(string a,string b, int n1, int n2, vector<vector<int>>&dp){
        if(dp[n1][n2]!=-1) return dp[n1][n2]; 
        if(n1==size(a) && n2==size(b)) return dp[n1][n2]= 0;        
        if(n1==size(a)) return dp[n1][n2]= size(b)-n2;
        if(n2==size(b)) return dp[n1][n2]= size(a)-n1;    
        if(a[n1]==b[n2]) return dp[n1][n2]= sol(a,b,n1+1,n2+1,dp);  
        return dp[n1][n2]= 1+min(sol(a,b,n1+1,n2,dp), sol(a,b,n1,n2+1,dp));
    }
    int minDistance(string &word1, string &word2) {
        vector<vector<int>>dp;
        dp.resize(size(word1)+1,vector<int>(size(word2)+1,-1));
        return sol(word1,word2,0,0,dp);
    }
};