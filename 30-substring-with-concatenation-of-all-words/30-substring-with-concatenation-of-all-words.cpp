class Solution {
public:
    bool isValid( int i, int j, string &s, unordered_map<string,int>&mp,int len)
    {
        unordered_map<string,int>m;
        string t;int x = 0;
        for(int k = i;k<=j-len+1;k+= len){
            string t = s.substr(k,len);
            if(mp.count(t)<1) return false;
            else m[t]++;
            if( m[t] == mp[t]) x++;
        }
        return x == mp.size(); 
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int>mp;
        for(auto & it : words) mp[it]++;
        int len = words[0].size()*words.size(),i = 0;
        vector<int>res;
        for(int j = len-1;j<s.size();j++,i++){
            if( isValid(i,j,s,mp,words[0].size())) res.push_back(i);
        }
        return res;
    }
};