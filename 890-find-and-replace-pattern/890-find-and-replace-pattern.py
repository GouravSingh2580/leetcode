class Solution:
    def findAndReplacePattern(self, w: List[str], t: str) -> List[str]:
        l=[]
        for s in w:
            if [s.find(i) for i in s] == [t.find(j) for j in t]:
                l.append(s)
        return l
        