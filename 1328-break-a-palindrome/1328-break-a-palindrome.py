class Solution:
    def breakPalindrome(self, p: str) -> str:
        if len(p)<2:
            return ""
        p=list(p)
        for i in range(len(p)//2):
            if p[i]>'a':
                p[i]='a'
                break
        else:
            p[-1]='b'
        return ''.join(p)
        