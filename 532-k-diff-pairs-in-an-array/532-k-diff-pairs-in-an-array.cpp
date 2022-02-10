class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int c=0;
        for(auto i:mp){
            if(k)
            {
                if(mp.count( i.first+k )) c++;
            }
            else{
                if(i.second>1) c++;
            }
        }
        return c;
    }
};