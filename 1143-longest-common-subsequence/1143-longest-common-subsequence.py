class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        @cache
        def dp(a,n1,b,n2):
            if n1==0 or n2==0: return 0
            if a[n1-1]==b[n2-1]: return 1+dp(a,n1-1,b,n2-1)
            else: return max(dp(a,n1,b,n2-1), dp(a,n1-1,b,n2))
        return dp(text1,len(text1),text2,len(text2))