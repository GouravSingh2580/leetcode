class Solution {
    int dp[10001];
    int n; vector<int> arr;
    int rec(int level){
        if(level == n) return 0;
        
        if(dp[level]) return dp[level];
        int ans = -1;
        
        if(level+1 <= n) ans = arr[level]+rec(level+1);
        if(level+2 <= n) ans =  min(ans,arr[level]+rec(level+2));
        
        return dp[level] = ans;
    }
    public:
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,0,sizeof(dp));
        n= cost.size();
        arr.resize(n);
        arr =cost;
        return min(rec(1),rec(0));
    }
};