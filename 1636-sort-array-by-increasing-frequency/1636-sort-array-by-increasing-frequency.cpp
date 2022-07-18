class Solution {
public:
    static bool c(vector<int>a, vector<int>b){
        if(a.size()==b.size()) return a[0]>b[0];
        else return a.size()<b.size();
    }
    vector<int> frequencySort(vector<int>& n) {
        map<int,int>mp;
        vector<vector<int>>v;
        int k=0;
        for(auto i:n) mp[i]++;
        for(auto i:mp) {
            int t=i.second;
            vector<int>tt;
            while(t--){
                tt.push_back(i.first);
            } 
            v.push_back(tt);
        }
        sort(begin(v),end(v),c);
        vector<int>vv;
        for(auto i:v){
            for(auto j:i){
                vv.push_back(j);
            }
        }
        return vv;
    }
};