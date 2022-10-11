class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> v;
        v.push_back(nums[0]);
        
        for (auto i:nums)
        {
            if (i > v.back())
            {
                v.push_back(i);
                if (v.size()==3)  return true;
            }
            else{
                if (i <= v[0])      v[0] = i;
                else if (i <= v[1])      v[1] = i;
            }
        }
        
        return false;
    }
};