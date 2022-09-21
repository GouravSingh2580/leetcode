class Solution:
    def canConstruct(self, r: str, m: str) -> bool:
        dp=defaultdict(int)
        for i in m:
            dp[i]+=1
        dp2=defaultdict(int)
        
        for i in r:
            dp2[i]+=1
            
        for i in r:
            if dp[i]<dp2[i]:
                return False
        return True