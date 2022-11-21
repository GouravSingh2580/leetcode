class Solution {
public:
    using pi=pair<int,int>;
    int nearestExit(vector<vector<char>>& maze, vector<int>& e) {
        //bfs
        int m=maze.size(),n=maze[0].size();
        vector<int> dir={0,1,0,-1,0};
        queue<pi> q;
        q.push({e[0],e[1]});
        maze[e[0]][e[1]]='+';
        int steps=0;
        while(!q.empty()){
            int sz=q.size();
            for(int j=0;j<sz;j++){
                auto [x,y]=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int r=x+dir[i],c=y+dir[i+1];
                    if(r>=m || r<0 || c>=n || c<0 || maze[r][c]=='+')continue;
                    if(maze[r][c]=='.'){
                        if(r==0 || c==0 || r==m-1 || c==n-1){
                            return steps+1;
                        }
                        else{
                            q.push({r,c});
                            maze[r][c]='+';
                        }
                    }
                }
                
            }
            steps++;
        }
        return -1;
    }
};