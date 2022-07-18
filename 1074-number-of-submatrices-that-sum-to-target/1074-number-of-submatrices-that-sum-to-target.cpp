class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(),m=matrix[0].size();
        int dp[101][101];
        memset(dp,0,sizeof(dp));
        for(int i = 1 ; i<=n; i++){
            for(int j = 1; j<=m; j++){
                dp[i][j] = matrix[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
            }
        }
        int ans = 0;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                for(int p = 1; p<=i; p++){
                    for(int q = 1; q<=j; q++){
                        int val = dp[i][j] - dp[p-1][j] - dp[i][q-1] + dp[p-1][q-1];
                        if(val == target){
                            ans++;
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};