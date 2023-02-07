class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        return [i for y in zip(nums[:n],nums[n:]) for i in y]