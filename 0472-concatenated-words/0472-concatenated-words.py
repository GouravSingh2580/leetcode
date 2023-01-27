class Solution(object):
    def findAllConcatenatedWordsInADict(self, words):
        memo={}
        words=set(words)
        def dfs(word):
            if word in memo:
                return memo[word]
            for second_idx in range(1,len(word)):
                prefix,suffix=word[:second_idx],word[second_idx:]
                if prefix in words and suffix in words or prefix in words and dfs(suffix):
                    memo[word]=True
                    return True
            memo[word]=False
            return False
        
        return [word for word in words if dfs(word)]