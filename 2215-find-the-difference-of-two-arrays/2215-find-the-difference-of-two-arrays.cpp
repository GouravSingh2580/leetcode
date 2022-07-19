class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& n1, vector<int>& n2) {
        set<int>v1,v2;
        map<int,int>mp1,mp2;
        for(auto i:n1) mp1[i]++;
        for(auto i:n2) mp2[i]++;
        
        for(auto i:n1) if(!mp2[i]) v1.insert(i);
        for(auto i:n2) if(!mp1[i]) v2.insert(i);
        
        vector<int>a,b;
        a.assign(begin(v1),end(v1));
        b.assign(begin(v2),end(v2));
        
        return {a,b};
    }
};