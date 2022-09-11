class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        for i in b:
            if i not in a:
                return -1
        k=0
        t=a
        z=""
        while b not in z:
            z+=t
            k+=1
            
            if len(z)>(len(b)+len(a)):
                break
            if k>10**5:
                return -1
        if b in z:
            return k
        else:
            return -1
        