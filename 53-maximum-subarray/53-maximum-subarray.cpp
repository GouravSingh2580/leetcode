class Solution {
    int dp(const vector<int>& nums, int l, int ans) {
        if (l >= nums.size()) return -10004;
        
        ans = max(nums[l], ans + nums[l]);
        return max(ans, dp(nums, l+1, ans));
    }
public:
    int maxSubArray(vector<int>& nums) {
        return dp(nums, 0, -10004);
    }
};