class Solution:
    def numMatchingSubseq(self, s: str, words: List[str]) -> int:
        
        dp = {s:True}
        
        def isSub(s,word):
            if word in dp:
                return dp[word]
            j = 0
            for i in range(len(s)):
                if s[i] == word[j]:
                    j += 1
                    if j == len(word):
                        dp[word] = True
                        return True
            dp[word] = False
            return False
        
        ans = 0
        for word in words:
            if len(word) > len(s):
                continue
            else:
                if isSub(s,word):
                    ans += 1
        return ans