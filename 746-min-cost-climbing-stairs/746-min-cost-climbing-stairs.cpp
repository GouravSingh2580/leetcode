class Solution {
public:
    int dp[10001];
    int solve(vector<int>&arr,int s){
        if(s<0){
            return 0;
        }
        if(dp[s]) return dp[s];
        dp[s]= arr[s] + min(solve(arr,s-1), solve(arr,s-2));
        return dp[s];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min( solve(cost,cost.size()-1), solve(cost,cost.size()-2) );
    }
};