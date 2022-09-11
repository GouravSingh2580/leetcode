class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        for i in b:
            if i not in a:
                return -1
        k=0
        t=a
        z=""
        s=a
        for i in range(len(b)//(len(a))+2):
            if b in s:
                return i+1
            s += a

        return -1
        