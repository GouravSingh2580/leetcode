class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        // if(nums.empty()) return vector<int>({-1,-1});
        int s=std::lower_bound(nums.begin(),nums.end(), target)-nums.begin();
        int e=std::upper_bound(nums.begin(),nums.end(), target)-nums.begin();
        return (s==nums.size() or nums[s]!=target)? vector<int>({-1,-1}) : vector<int>({s,e-1});
    }
};