class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        pre=[]
        suff=[]
        x , y = float('inf') , float('-inf')
        for i in range(len(nums)):
            x=min(x,nums[i])
            pre.append(x)
            
        for i in reversed(nums):
            x=max(x,i)
            suff.append(x)
        
        suff=suff[::-1]
        
        # print(suff)
        
        for i in range(len(nums)):
            if nums[i]<suff[i] and nums[i]>pre[i]:
                return True
        return False
        
        