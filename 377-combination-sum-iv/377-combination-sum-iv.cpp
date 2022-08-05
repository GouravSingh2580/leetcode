class Solution {
private:
    int helper(vector<int>& dp, vector<int>& nums, int left) {
        if (left <= 0) return left == 0;
        if (dp[left] != -1) return dp[left];
        dp[left] = 0;
        for (int i = 0; i < nums.size(); i++) {
            dp[left] += helper(dp, nums, left - nums[i]);
        }
        return dp[left];
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, -1);
        return helper(dp, nums, target);
    }
};