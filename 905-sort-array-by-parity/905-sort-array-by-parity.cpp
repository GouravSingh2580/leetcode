class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>odd,even;
        for(auto i:nums){
            if(i%2) odd.push_back(i);
            else even.push_back(i);
        }
        nums.erase(nums.begin(),nums.end());
        for(auto i:even){
            nums.push_back(i);
        }
        for(auto i:odd){
            nums.push_back(i);
        }
        return nums;
    }
};