class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums) mp[i]++;
        
        int k=1;
        while (mp[k]) k+=1;
        
        return k;
    }
};