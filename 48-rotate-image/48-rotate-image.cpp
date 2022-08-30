class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        reverse(m.begin(),m.end());
        
        vector<vector<int>> v;
        
        int k=0;
        
        while(k<m.size()){
            vector<int>vv;
            for(auto i:m){
                vv.push_back(i[k]);
            }
            k++;
            for(auto i:vv) cout<<i<<" ";
            cout<<endl;
            v.push_back(vv);
        }
        m=v;
    }
};