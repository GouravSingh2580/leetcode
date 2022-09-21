class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        vector<int>v;
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<nums.size();i++) if(nums[i]%2==0) mp[i]++;
        for(auto j:nums) if(j%2==0) sum+=j;
        
        for(auto i:q){
            int idx=i[1];
            int val=i[0];
            
            int prev=nums[idx];
            nums[idx]+=val;
            
            if(!mp[idx] && nums[idx]%2==0){ // if not present add
                sum+=nums[idx];
                mp[idx]=1;
            }
            else if(mp[idx] && nums[idx]%2!=0){ // remove from map because descarding it
                sum-=prev;
                mp[idx]=0;
            }
            else if(mp[idx] && nums[idx]%2==0){ // do not remove from map because making changes
                sum-=prev;
                sum+=nums[idx];
                // mp[idx]=0;
            }
            v.push_back(sum);
        }
        return v;
    }
};