class Solution {
    void dfs(int e, vector<vector<int>>&g, vector<int>&vis, int &c){
        vis[e]=1;
        for(auto &i:g[e]){
            if(!vis[i]) {
                dfs(i,g,vis,c);c++;
            }
        }
    }
public:
    long long countPairs(int n, vector<vector<int>>& e) {
        vector<int>vis(n);
        vector<int>a;
        vector<vector<int>>g(n);
        for(auto &x : e)
        {
            int u = x[0];
            int v = x[1];
            
            g[u].push_back(v);
            g[v].push_back(u);
        } 
        int c=1;
        for(int i=0;i<n;i++){
            if(!vis[i]) {
                dfs(i,g,vis,c); a.push_back(c); c=1;
            }
        }
        if(a.size()==1) return 0;
        long long ans = 0, sum = 0;
        
        for(int i = 0;i < a.size();i++){
            ans += (sum * a[i]);
            sum += a[i];
        }
        
        return ans; // {(sum of a[i])^2 - sum of (a[i]^2)}/2
    }
};