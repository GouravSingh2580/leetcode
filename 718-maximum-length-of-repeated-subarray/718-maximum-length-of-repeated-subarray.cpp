class Solution {
public:
    
    int lcs(vector<int>&a, vector<int>& b, int n, int m, vector<vector<int>>&dp, int& maxm){
        if(n==0 || m==0) return 0;
        
        if(dp[n][m]!=-1) return dp[n][m];
        
        if(a[n-1]==b[m-1]){
            dp[n][m]= lcs(a,b,n-1,m-1,dp,maxm)+1;
        }
        else{
            dp[n][m]= 0;
        }
        lcs(a,b,n-1,m,dp,maxm);
        lcs(a,b,n,m-1,dp,maxm);
        
        maxm=max(maxm,dp[n][m]);
        
        return dp[n][m];
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp;
        int maxm=INT_MIN;
        dp.resize(nums1.size()+1,vector<int>(nums2.size()+1,-1));
        lcs(nums1,nums2,nums1.size(),nums2.size(),dp,maxm);
        return maxm;
    }
};