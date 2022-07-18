class Solution {
public:
    int percentageLetter(string s, char l) {
        map<char,int>mp;
        for(auto i:s) mp[i]++;
        int j=0;
        for(auto i:mp){
            if(i.first==l){
                j=i.second;break;
            }
        }
        return (100*j)/s.size();
    }
};