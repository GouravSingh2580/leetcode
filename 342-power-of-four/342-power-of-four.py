class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        for i in range(16):
            k=pow(4,i)
            if k==n:
                return True
        return False
        