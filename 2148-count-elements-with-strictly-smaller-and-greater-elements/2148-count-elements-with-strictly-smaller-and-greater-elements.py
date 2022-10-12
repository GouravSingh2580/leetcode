class Solution:
    def countElements(self, nums: List[int]) -> int:
        c=0
        for i in range(len(nums)):
            f=[0,0]
            for j in range(len(nums)):
                if nums[j]<nums[i]:
                    f[0]+=1
                if nums[j]>nums[i]:
                    f[1]+=1
            if f[0] and f[1]:
                c+=1
        return c
        