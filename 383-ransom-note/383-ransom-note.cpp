class Solution {
public:
    bool canConstruct(string r, string m) {
        map<char,int>mp;
        for(auto i:m) mp[i]++;
        int c=0;
        for(auto i:r){
            if(mp[i]){
                mp[i]--; c++;
            }
            else return false;
        }
        return true;
    }
};