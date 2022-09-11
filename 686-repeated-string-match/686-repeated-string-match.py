class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        if not (set(b).issubset(set(a))):
            return -1

        s = a
        for i in range(len(b)//(len(a))+2):
            if b in s:
                return i+1
            s += a

        return -1