class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>t;
        for(int i=0;i<nums.size();i++){
            t.push_back(nums[nums[i]]);
        }
        return t;
    }
};