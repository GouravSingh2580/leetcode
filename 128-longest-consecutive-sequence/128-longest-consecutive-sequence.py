class Solution(object):
    def longestConsecutive(self, nums):
        nums = set(nums)
        ans = 0
        for i in nums:
            if i - 1 not in nums:
                y = i + 1
                while y in nums:
                    y += 1
                ans = max(ans, y - i)
        return ans