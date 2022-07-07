class Solution {
public:
    int getx(vector<int>n){
        int ans=0;
        for(int i=0;i<size(n);i++) ans^=n[i];
        return ans;
    }
    int subsetXORSum(vector<int>& n) {
        int y=n.size();
        int x=(1<<y);
        vector<vector<int>>v(x);
        int ans=0;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if((i>>j )&1) v[i].push_back(n[j]);
            }
        }
        for(auto i:v){
            ans+=getx(i);
        }
        return ans;
    }
};