class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long res = 0;
        long long curSum = 0;
        unordered_set<int> s;
        
        for (int i = 0; i < k; ++i) {
            curSum += nums[i];
            s.insert(nums[i]);
        }
        if (s.size()==k) res = curSum;
        
        for (int l = 0, r = k - 1; r < nums.size() - 1; l++,r++) {
            curSum -= nums[l];  curSum += nums[r+1];
            
            s.erase(nums[l]);
            s.insert(nums[r+1]);
            s.insert(nums[l+1]);
            
            if (s.size() == k) {
                res = max(curSum,res);
            }
        }
        return res;
    }
};