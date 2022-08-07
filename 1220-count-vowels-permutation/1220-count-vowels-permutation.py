class Solution:
    def countVowelPermutation(self, n: int) -> int:
        return sum(reduce(lambda cur, _: [
        sum(cur[vowel] for vowel in range(6) if 1 << vowel & mask) % (10 ** 9 + 7) 
        for mask in (22, 5, 10, 4, 12) ], range(n - 1), [1, 1, 1, 1, 1])) % (10 ** 9 + 7)
        