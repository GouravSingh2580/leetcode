class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        map<int,int>mp;
        for(auto i:n1) mp[i]++;
        
        set<int>s;
        for(auto i:n2) {
            if(mp[i]) s.insert(i);
        }
        
        vector<int>v;
        
        v.assign(begin(s),end(s));
        
        return v;
    }
};