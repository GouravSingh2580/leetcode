class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        s=""
        for i in num:
            s+=str(i)
        res=int(s)+(k)
        l=[]
        for i in str(res):
            l.append(int(i))
        return l