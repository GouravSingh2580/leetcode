class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& n) {
        int m=n.size();
        map<int,int>mp;
        vector<int>v;
        
        for(auto i:n) mp[i]++;
        sort(begin(n),end(n),greater<int>());
        while(m)
            if(!mp[m]) v.push_back(m--); else m--;
        return v;
    }
};