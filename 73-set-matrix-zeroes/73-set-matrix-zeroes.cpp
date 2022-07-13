class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<pair<int,int>> q;
        int row = matrix.size(), col = matrix[0].size();
        
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                if(matrix[i][j]==0) q.push({i,j});
            }
        }
        
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int r=0; r<row; ++r){
                matrix[r][y]=0;
            }
            for(int c=0; c<col; ++c){
                matrix[x][c]=0;
            }
        }
        
        return;
    }
};
