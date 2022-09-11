class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        d=defaultdict(int)
        
        for i in nums:
            d[i]=1
        
        k=0
        while d[k]:
            k+=1
        
        return k
        