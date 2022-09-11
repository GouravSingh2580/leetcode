class Solution:
    def missingNumber(self, n: List[int]) -> int:
        k = 0
        hashk = defaultdict(int)
        for i in n:
            hashk[i] = 1
        while hashk[k]:
            k+=1
        return k
        
        