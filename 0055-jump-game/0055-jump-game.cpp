class Solution {
public:
    // To solve this problem, we can use a greedy approach. The idea is to keep track of the maximum reachable index at each step, and return true if we can reach the last index.
    bool canJump(vector<int>& nums) {
        int maxReachableIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReachableIndex) {
                return false;
            }
            maxReachableIndex = max(maxReachableIndex, i + nums[i]);
            if (maxReachableIndex >= nums.size() - 1) {
                return true;
            }
        }
        return false;
    }
};
