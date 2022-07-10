class Solution(object):
    def isIsomorphic(self, s, t):
        return map(s.find, s) == map(t.find, t)
        