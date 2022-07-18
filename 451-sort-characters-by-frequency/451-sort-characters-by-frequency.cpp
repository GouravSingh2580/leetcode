class Solution {
public:
    static bool c(vector<char>a, vector<char>b){
        return a.size()>b.size();
    }
    string frequencySort(string s) {
        map<char,int>mp;
        vector<vector<char>>f;
        for(auto i:s) mp[i]++;
        for(auto i:mp){
            int t=i.second;
            vector<char>tt;
            while(t--) tt.push_back(i.first);
            f.push_back(tt);
        }
        sort(begin(f),end(f),c);
        string ss;
        for(auto i:f){
            for(auto j:i) ss+=j;
        }
        return ss;
    }
};