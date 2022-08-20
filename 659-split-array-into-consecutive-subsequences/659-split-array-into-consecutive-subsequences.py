class Solution:
    def isPossible(self, nums: List[int]) -> bool:
        
        distinct_ending_len = defaultdict(list)
        
        for it in nums:
            prev_min = 0 if len(distinct_ending_len[it - 1]) == 0 else heapq.heappop(distinct_ending_len[it - 1])
            heapq.heappush(distinct_ending_len[it], prev_min + 1)
        
        return all(len(it) == 0 or heapq.heappop(it) >= 3 for it in distinct_ending_len.values())