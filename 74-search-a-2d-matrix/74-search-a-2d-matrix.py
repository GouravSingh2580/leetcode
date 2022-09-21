class Solution:
    def searchMatrix(self, m: List[List[int]], target: int) -> bool:
        for i in m:
            for j in i:
                if j==target:
                    return True
        return False
        