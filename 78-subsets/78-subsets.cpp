class Solution {
public:
    vector<vector<int>> subsets(vector<int>& n) {
        
        int y=n.size();
        int x=(1<<y);
        vector< vector<int> >ans(x);
        
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if((i>>j )&1 ){
                    ans[i].push_back(n[j]);
                }
            }
        }
        return ans;
    }
};