class Solution:
    def twoSum(self, n: List[int], t: int) -> List[int]:
        indices = [[i,j] for i in range(0,len(n)) for j in range(0,len(n)) if i<j and n[i]+ n[j]==t]
        return indices[0];
        