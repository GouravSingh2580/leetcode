class Solution {
public:
    int mx=0;
    unordered_map<string,bool>mp,mp2;
    vector<vector<char>>v;
    vector<vector<bool>>vis;
    
    void call(int i,int j,string &s){
        if(i<0||j<0||i>=v.size()||j>=v[0].size()||vis[i][j]||s.size()>=mx)return;
        vis[i][j]=true;
        s.push_back(v[i][j]);
        if(mp[s]&&mp2[s]!=true)mp2[s]=true;
        call(i-1,j,s);
        call(i,j-1,s);
        call(i,j+1,s);
        call(i+1,j,s);
        s.pop_back();
        vis[i][j]=false;
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<int>cnt(26);
        for(auto &c:words){
            mp[c]=true;
            int x=c.size();
            if(x>mx)mx=x;
            cnt[c[0]-'a']=1;
        }
        v=board;
        int n=board.size(),m=board[0].size();
        vis.resize(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                string s="";
                if(cnt[v[i][j]-'a'])call(i,j,s);
            }
        }
        vector<string>ans2;
        for(auto &c:mp2)ans2.push_back(c.first);
        return ans2;  
    }
};