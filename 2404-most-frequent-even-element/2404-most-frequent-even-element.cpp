class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        
        map<int,int>mp;
        for(auto i:nums) mp[i]++;
        int ans=-1;
        int z=0;
        for(auto i:mp){
            if(i.first%2==0){
                if(i.second>z){
                    z=i.second;
                    ans=i.first;
                }
            }
        }
        return ans;
    }
};