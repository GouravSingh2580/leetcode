class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int>v;
        vector<int>s;
        int n=nums.size();
        int l=0;
        int r=n-1;
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            p.push_back(make_pair(nums[i],i));
        }
        
        sort(nums.begin(),nums.end());
        while(l<r){
            if(nums[l]+nums[r]==target){
                for(auto it:p){
                    if(it.first==nums[l]){
                        v.insert(it.second);
                    }
                    if(it.first==nums[r]){
                        v.insert(it.second);
                    }
                }
            }
            if(nums[l]+nums[r]<target){
                l++;
            }
            else{
                r--;
            }
        }
        for(auto it:v){
            s.push_back(it);
        }
        return s;
    }
};