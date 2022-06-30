class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int median=nums[size(nums)/2];
        int ans=0;
        for(auto i:nums){
            ans+=abs(i-median);
        }
        return ans;
    }
};