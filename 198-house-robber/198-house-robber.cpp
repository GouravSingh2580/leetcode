class Solution {
public:
    int call(vector<int> &a,int i,vector<int>&dp)
    {
        if(i>=a.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]= max(call(a,i+1,dp),a[i]+call(a,i+2,dp));
    }
    int rob(vector<int>& nums) {
        vector<int>dp(size(nums)+1,-1);
        return call(nums,0,dp);
    }
};