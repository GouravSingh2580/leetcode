class Solution:
    def minFallingPathSum(self, A: List[List[int]]) -> int:
        N = len(A)
        for i in range(1, N):
            for j in range(N):
                A[i][j] += min(A[i - 1][k] for k in (j - 1, j, j + 1) if 0 <= k < N)
        return min(A[-1])