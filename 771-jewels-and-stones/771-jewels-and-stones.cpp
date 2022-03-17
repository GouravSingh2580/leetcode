class Solution {
public:
    int numJewelsInStones(string j, string s) {
        unordered_map<int,int>mp;
        for(auto i:j){
            mp[i]++;
        }
        int c=0;
        for(auto i:s){
            if(mp[i]) c++;
        }
        return c;
    }
};