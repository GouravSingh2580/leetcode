class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        for i in b:
            if i not in a:
                return -1
        k=0
        t=a
        z=""
        for i in range(len(b)//len(a)+2):
            z+=t
            k+=1
            
            # if len(z)>(len(b)+len(a)):
            #     break
            if b in z:
                return k
        
        return -1
        