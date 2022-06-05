class Solution {
public:
    int res=0;
    
    bool isafe(vector<string>v,int n, int row, int col){
        for(int i=0;i<n;i++){
            if(v[i][col]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
            if(v[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row-1,j=col+1;i>=0&& j<n;i--,j++){
            if(v[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    
    void NQ(vector<string>v,int n, int row){
        if(n==row){
            res+=1;
            return;
        }
        for(int i=0;i<n;i++){
            if(isafe(v,n,row,i)){
                v[row][i]='Q';
                NQ(v,n,row+1);
                v[row][i]='.';
            }
        }
        return;
    }
    int totalNQueens(int n) {
        string s="";
        vector<string>v;
        for(int i=0;i<n;i++) s+='.';
        for(int i=0;i<n;i++) v.push_back(s);
        
        NQ(v,n,0);
        return res;
    }
};