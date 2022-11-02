class Solution:
    def searchMatrix(self, m: List[List[int]], t: int) -> bool:
        for i in m:
            if t in i:
                return True
        return False