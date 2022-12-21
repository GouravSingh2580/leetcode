class Solution:
    def possibleBipartition(self, N: int, dislikes: List[List[int]]) -> bool:
        graph = collections.defaultdict(list)
        colors = dict()        
        for a,b in dislikes:
            graph[a].append(b)
            graph[b].append(a)
        
        for person in range(1,N+1):            
            if person not in colors and not self.dfs(graph,person,colors, 1):
                return False
        return True if len(colors) == N else False
    
    def dfs(self,graph,person,colors,color):                
        if person in colors:
            return color == colors[person]
        colors[person] = color        
        for hate in graph[person]:                
            if not self.dfs(graph,hate,colors,color * -1):
                return False
        return True