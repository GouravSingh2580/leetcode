class Solution {
public:
    int dp[100001];
    int dfs(vector<int> &a, int k, int n) {
        if(dp[n]!=INT_MIN) return dp[n];
        int t=n-1,val=a[n-1];
        for(int i=n-1;i>=max(0,n-k);i--){
            //nonpositve is always the best option
            if(a[i]>=0) return dp[n]=dfs(a,k,i)+a[n];
            //if a value comes early but with a greater value
            //it is always better to choose this one
            if(a[i]>=val) val=a[i],t=i;
        }
        int res=INT_MIN;
        for(int i=t;i>=max(0,n-k);i--)
            res=max(res,dfs(a,k,i));
        return dp[n]=res+a[n];
    }
    int maxResult(vector<int>& a, int k) {
        for(int i=0;i<100001;i++) dp[i]=INT_MIN;
        dp[0]=a[0];
        return dfs(a,k,a.size()-1);
    }
};