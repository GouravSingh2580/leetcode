class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> v;
        v.push_back(nums[0]);
        
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > v.back())
            {
                v.push_back(nums[i]);
                if (v.size() > 2)  return true;
                // continue;
            }
            
            if      (nums[i] <= v[0])      v[0] = nums[i];
            else if (nums[i] <= v[1])      v[1] = nums[i];
        }
        
        return false;
    }
};