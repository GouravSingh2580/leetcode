class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums=sorted(nums)
        nums=nums[::-1]
        for i in range(len(nums)-2):
            if nums[i]<nums[i+1]+nums[i+2]:
                return nums[i]+nums[i+1]+nums[i+2]
        return 0
        