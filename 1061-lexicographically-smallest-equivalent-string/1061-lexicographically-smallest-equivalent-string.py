class Solution(object):   
    def smallestEquivalentString(self, A, B, S):
        neighbors = collections.defaultdict(set)
        for a, b in zip(A, B):
            neighbors[a].add(b)
            neighbors[b].add(a)
        
        visited = set()
        def dfs(ch, minChar, visited):
            visited.add(ch)
            res = minChar
            
            for nei in neighbors[ch]:
                if nei not in visited:
                    res = min(res, dfs(nei, min(minChar, nei), visited))
            return res


        return ''.join([dfs(c, c, set()) for c in S])