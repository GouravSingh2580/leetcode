class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        # print(sorted(Counter(word1)),sorted(Counter(word2)))
        if len(word1)!=len(word2):
            return False
        
        if set(word1)!=set(word2):
            return False
        
        if sorted(Counter(word1).values())==sorted(Counter(word2).values()):
            return True
        
        return False