class Solution {
public:
    vector<vector<int>>dp;
    
    int knap(vector<int>& v, int n, int w, vector<vector<int>>& dp){
        if(n==0 && w!=0) return 0;
        if(w==0) return 1;
        if(dp[n][w]!=-1) return dp[n][w];
        if (v[n-1] > w || v[n-1] == 0){
            // return dp[n][w]= (knap(v,n-1,w-v[n-1],dp)) +knap(v,n-1,w,dp);
            return dp[n][w]= knap(v,n-1,w,dp);
        }
        else{
            return dp[n][w]= (knap(v,n-1,w-v[n-1],dp)) +knap(v,n-1,w,dp);
        }
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0,cc=0;
        for(auto i:nums){
            if(i==0) cc++;
            sum+=i;
        }
        
        int w=abs(sum+target)/2;
        dp.resize(nums.size()+1, vector<int>(w+1,-1));
        // if(sum<target) return 0;
        // return knap(z,nums.size(),w,dp);
        
        if(sum < abs(target) || (target+sum) %2 != 0) return 0;
	
        //S1 is newTarget
        int newTarget = (sum + target)/2;
        return pow(2,cc)* knap(nums,nums.size(),newTarget,dp);
    }
};