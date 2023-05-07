class Solution:
    def arraySign(self, nums: List[int]) -> int:
        def sigf(nums):
            res=1
            for i in nums:
                res*=i
            return res
        ans=sigf(nums)
        if ans>0:
            return 1
        elif ans<0:
            return -1
        return 0