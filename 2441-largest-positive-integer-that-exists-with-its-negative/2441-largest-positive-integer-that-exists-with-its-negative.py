class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        t=1
        nums=sorted(nums)
        nums=nums[::-1]
        for i in nums:
            if -i in nums:
                return i
        return -1
        