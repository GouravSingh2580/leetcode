class Solution {
public:
    vector<string>v;
    
    void dfs(string s,int x,int y){
        if(!y) v.emplace_back(s);
        
        if(x) dfs(s+'(',x-1,y);
        if(x<y) dfs(s+')',x,y-1);
    }
    
    vector<string> generateParenthesis(int n) {
        dfs("",n,n);
        return v;
    }
};