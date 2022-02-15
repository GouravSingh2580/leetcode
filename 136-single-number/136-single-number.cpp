class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int k;
        for(auto i:mp){
            if(i.second==1){
                k=i.first;
            }
        }
        return k;
    }
};