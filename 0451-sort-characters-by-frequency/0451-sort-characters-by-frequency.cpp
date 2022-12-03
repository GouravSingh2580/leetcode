class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp1;
        string str="";
        for(auto i : s) mp1[i]++;
        
        multimap<int ,char,greater<int>>mp;
        
        for(auto [p,q] : mp1) mp.insert({q,p});
        
        for(auto [p,q] : mp) for(int i=1;i<=p;i++) str+=q;
        
        return str;
    }
};