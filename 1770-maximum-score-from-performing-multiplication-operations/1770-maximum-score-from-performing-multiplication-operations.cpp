class Solution {
public:
    vector<vector<int>> dp;
    int solve(vector<int>& nums,vector<int>& mul,int pm,int lo,int hi)
    {
        if( pm >= mul.size())
            return 0;
        if(dp[pm][lo] != INT_MIN)
            return dp[pm][lo];
        
        return dp[pm][lo]= max(mul[pm]*nums[lo]+solve(nums,mul,pm+1,lo+1,hi),
                   mul[pm] * nums[hi] + solve(nums,mul,pm+1,lo,hi-1));
    }
    
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int n = nums.size();
        int m = mul.size();
        dp.assign(m+1,vector<int>(m+1,INT_MIN));
        
        return  solve(nums,mul,0,0,n-1);
    }
};