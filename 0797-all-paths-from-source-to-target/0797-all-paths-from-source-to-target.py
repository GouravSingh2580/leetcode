class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        if not graph:
            return []
        n = len(graph)
        stack = [(0,[0])]
        res = []
        while stack:
            node, path = stack.pop()
            if node == n - 1:
                res.append(path)
            for nei in graph[node]:
                stack.append((nei, path+[nei]))
        return res