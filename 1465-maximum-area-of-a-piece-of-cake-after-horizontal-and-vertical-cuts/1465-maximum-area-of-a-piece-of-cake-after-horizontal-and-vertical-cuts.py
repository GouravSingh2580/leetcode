class Solution:
    def maxArea(self, h: int, w: int, H: List[int], V: List[int]) -> int:
        H.sort()
        V.sort()
        return max(map(sub, H + [h], [0] + H)) * max(map(sub, V + [w], [0] + V)) % 1000000007