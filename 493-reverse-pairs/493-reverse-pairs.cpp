class Solution {
    int mergesort(vector<int>&nums,int lo,int hi){
        if(lo>=hi) return 0;
        int mid = (hi+1-lo)/2+lo;
        int cnt=mergesort(nums,lo,mid-1)+mergesort(nums,mid,hi);
        int x=mid;
        for(int i = lo;i<mid;i++){
            while(x<=hi && (long)nums[i]>2*(long)nums[x]) x++;
            cnt+=(x-mid);
        }
        inplace_merge(nums.begin()+lo,nums.begin()+mid,nums.begin()+hi+1);
        return cnt;
    }
    public:
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};