from collections import defaultdict as dfd
class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        d = dfd(int)
        for i in nums:
            d[i] =1
        for i in range(1,2**31):
            if(d[i] == 0):
                return i