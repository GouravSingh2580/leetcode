class Solution(object):
    def maxIceCream(self, A, coins):
        A=sorted(A)
        for i, a in enumerate(A):
            coins -= a
            if coins < 0:
                return i
        return len(A)