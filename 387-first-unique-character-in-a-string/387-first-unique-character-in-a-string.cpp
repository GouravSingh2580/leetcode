class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp,mp1;
        for(auto i:s) mp[i]++;
        for(auto i:mp){
            if(i.second>=2) mp1[i.first]++;
        }
        int k=0;
        for(auto i:s){
            if(!mp1[i]) return k;
            else k++;
        }
        return -1;
    }
    
};