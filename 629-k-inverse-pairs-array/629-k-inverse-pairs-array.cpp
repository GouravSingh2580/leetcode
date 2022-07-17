class Solution {
public:
    int kInversePairs(int n, int k) {
        int dp[1001][1001]={1};
        for(int i=1;i<=n;i++){
            for(int j=0;j<=k;j++){
                for(int z=0;z<=(min(j,i-1));z++)
                    dp[i][j]=(dp[i][j]+dp[i-1][j-z])%(1000000007);
            }
        }
        return dp[n][k];
    }
};