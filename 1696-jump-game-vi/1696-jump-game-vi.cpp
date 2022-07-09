class Solution {
public:
    int dp[100001];
    int dfs(vector<int> &a, int k, int ind) {
        if(dp[ind]!=INT_MIN/2) return dp[ind];
        int t=ind-1,val=a[ind-1];
        for(int i=ind-1;i>=max(0,ind-k);i--){
            //nonpositve is always the best option
            if(a[i]>=0) return dp[ind]=dfs(a,k,i)+a[ind];
            //if a value comes early but with a greater value
            //it is always better to choose this one
            if(a[i]>=val) val=a[i],t=i;
        }
        int res=INT_MIN;
        for(int i=t;i>=max(0,ind-k);i--)
            res=max(res,dfs(a,k,i));
        return dp[ind]=res+a[ind];
    }
    int maxResult(vector<int>& a, int k) {
        for(int i=0;i<100001;i++) dp[i]=INT_MIN/2;
        dp[0]=a[0];
        return dfs(a,k,a.size()-1);
    }
};