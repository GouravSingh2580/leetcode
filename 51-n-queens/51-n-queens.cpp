class Solution {
public:
    vector<vector<string>> res;
    
    bool isafe(vector<string>chess,int row, int col, int n){
        for(int i=0;i<n;i++){
            if(chess[i][col]=='Q') return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(chess[i][j]=='Q') return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(chess[i][j]=='Q') return false;
        }
        return true;
    }
    void NQ(vector<string>chess, int n, int row){
        if(row==n){
            res.push_back(chess);
            return;
        }
        for(int i=0;i<n;i++){
            if(isafe(chess,row,i,n)){
                chess[row][i]='Q';
                NQ(chess,n,row+1);
                chess[row][i]='.';
            }
        }
        return;
    }
    vector<vector<string>> solveNQueens(int n) {
        string s="";
        vector<string>chess;
        for(int i=0;i<n;i++) s+='.';
        for(int i=0;i<n;i++) chess.push_back(s);
        NQ(chess,n,0);
        return res;
    }
};