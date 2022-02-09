class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>>s;
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            
            for(int j=i+1;j<n;j++)
            {
                if(abs(nums[i]-nums[j])==k){
                  nums[i] > nums[j] ? s.insert({nums[i],nums[j]}) :             s.insert({nums[j],nums[i]}) ; 
                
                //cout<<nums[i]<<" "<<nums[j];
                }
                //cout<<'\n';
            }
        }
        return s.size();
    }
};