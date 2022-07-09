class Solution:
    def twoSum(self, n: List[int], t: int) -> List[int]:
        for i in range(0,len(n)):
            if t-n[i] in n[i+1:]:
                return [i,n[i+1:].index(t-n[i])+i+1]
        