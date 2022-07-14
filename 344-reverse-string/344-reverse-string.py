class Solution(object):
    def reverseString(self, s):
        s[: : -1] = s
        