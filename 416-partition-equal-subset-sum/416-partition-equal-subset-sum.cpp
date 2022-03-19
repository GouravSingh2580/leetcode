class Solution {
public:
    vector<vector<int>> dp;
    bool knapsack(vector<int>& v, int avg, int n){
        if(dp[n][avg]!=-1) return dp[n][avg];
        
        if(avg==0) return dp[n][avg]= true;
        if(n==0) return dp[n][avg]= false;
        
        if(v[n-1]<=avg) {
            dp[n][avg]=(knapsack(v,avg-v[n-1],n-1) || knapsack(v,avg,n-1));
            return dp[n][avg];
        }
        
        else {
            dp[n][avg] =knapsack(v,avg,n-1);
            return dp[n][avg];
        }
    }
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(auto i:nums){
            s=s+i;
        }
        int avg=s/2;
        cout<<avg<<endl;
        dp.resize(nums.size()+1, vector<int>(avg+1, -1));
        
        if(s%2) return false;
        else
        return knapsack(nums,avg,nums.size());
    }
};