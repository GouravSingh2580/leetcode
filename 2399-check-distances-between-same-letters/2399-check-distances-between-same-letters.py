class Solution:
    def checkDistances(self, s: str, distance: List[int]) -> bool:
        st="abcdefghijklmnopqrstuvwxyz"
        k=0
        x=list(map(str,s))
        print(x)
        for i in distance:
            if st[k] in x:
                start=x.index(st[k])
                x[start]='.'
                end=x.index(st[k])
                # print(start)
                
                if i!=end-start-1:
                    return False
            k+=1
        return True
                
        