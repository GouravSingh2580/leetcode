class Solution {
public:
    bool checkIfPangram(string sentence) {
        string s="abcdefghijklmnopqrstuvwxyz";
        unordered_map<char,int>mp;
        for(auto i:s) mp[i]++;
        
        for(auto i:sentence) {
            if(!mp[i]) {
            }
            else{
                mp[i]=0;
            }
        }
        
        for(auto i:mp){
            if(mp[i.first]) return false;
        }
        return true;
    }
};