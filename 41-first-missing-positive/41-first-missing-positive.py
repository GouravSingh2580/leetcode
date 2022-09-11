class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        k = 1
        for i in sorted(nums):
            if i == k:
                k+=1
        return k