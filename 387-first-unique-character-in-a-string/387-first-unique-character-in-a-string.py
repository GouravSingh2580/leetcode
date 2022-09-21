class Solution:
    def firstUniqChar(self, s: str) -> int:
        dp=defaultdict(int)
        for i in s:
            dp[i]+=1
        k=0
        for i in s:
            if dp[i]==1:
                return k
            k+=1
        return -1