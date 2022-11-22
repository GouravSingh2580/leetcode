class Solution {
public:
    int numSquares(int n) {
        vector<int> dp {0};
        while (dp.size() <= n) {
            int m = dp.size(), squares = 1e5;
            for (int i=1; i*i<=m; ++i)
                squares = min(squares, dp[m-i*i] + 1);
            dp.push_back(squares);
        }
        return dp[n];
    }
};