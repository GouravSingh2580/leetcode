class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;;i++){
            auto it=mp.find(target-nums[i]);
            if(it!=mp.end())
            return vector<int>{i,it->second};
            
            mp[nums[i]]=i;
        }
    }
};