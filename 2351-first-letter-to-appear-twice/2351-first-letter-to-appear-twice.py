class Solution:
    def repeatedCharacter(self, s: str) -> str:
        t=set()
        
        for i in s:
            if i in t:
                return i
            else:
                t.add(i)
        
        