class Solution:
    def rob(self, nums: List[int]) -> int:
        if sum(nums)==0:
            return 0
        # @cache
        d=defaultdict(int)
        def dp(nums, n):
            if n<0:
                d[n]=0
                return d[n]
            if d[n]:
                return d[n]
            d[n]=max(dp(nums,n-2)+nums[n], dp(nums,n-1))
            return d[n]
        # @cache
        return dp(nums,len(nums)-1)