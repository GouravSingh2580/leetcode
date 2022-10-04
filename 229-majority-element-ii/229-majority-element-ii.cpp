class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums) mp[i]++;
        
        int f=floor(nums.size()/3);
        vector<int>v;
        
        for(auto i:nums){
            if(mp[i]>f){
                v.push_back(i);
                mp[i]=0;
            }
        }
        return v;
    }
};