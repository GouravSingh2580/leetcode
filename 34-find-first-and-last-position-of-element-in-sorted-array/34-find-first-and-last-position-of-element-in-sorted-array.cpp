class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        #define v vector<int>
        int s=std::lower_bound(nums.begin(),nums.end(), target)-nums.begin();
        int e=std::upper_bound(nums.begin(),nums.end(), target)-nums.begin();
        return (s+1>nums.size() or nums[s]!=target) ? v({-1,-1}) : v({s,e-1});
    }
};