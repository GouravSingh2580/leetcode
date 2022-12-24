class Solution:
    @cache
    def numTilings(self, n, previous_gap = False):
        if n < 0: return 0
        if n == 0: return not previous_gap
        if previous_gap:
            return (self.numTilings(n-1) + self.numTilings(n-1, True)) % 1000000007
        return (self.numTilings(n-1) + self.numTilings(n-2) + 2*self.numTilings(n-2, True)) % 1000000007