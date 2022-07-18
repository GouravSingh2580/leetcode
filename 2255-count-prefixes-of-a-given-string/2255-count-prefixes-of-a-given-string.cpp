class Solution {
public:
    int countPrefixes(vector<string>& w, string s) {
        unordered_map<string,int>mp;
        string p="";
        
        int c=0;
        for(auto i:s) p+=i, mp[p]++;
        for(auto i:w) if(mp[i]) c++;
        
        return c;
    }
};