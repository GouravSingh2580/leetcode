class Solution {
public:
    bool halvesAreAlike(string s) {
        string ss="aeiouAEIOU";
        unordered_map<char,int>mp;
        for(auto i:ss) mp[i]++;
        
        int c1=0,c2=0;
        for(int i=0;i<size(s)/2;i++){
            if(mp[s[i]]) c1+=1;
        }
        for(int i=size(s)/2;i<size(s);i++){
            if(mp[s[i]]) c2+=1;
        }
        return c1==c2;
    }
};