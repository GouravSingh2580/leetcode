class Solution(object):
    def minStoneSum(self, A, k):
        A = [-a for a in A]
        heapq.heapify(A)
        for i in xrange(k):
            heapq.heapreplace(A, A[0] / 2)
        return -sum(A)
        