class Solution {
public:
    map<char,string>mp;
    int dp(string s){
        string r="";
        for(auto i:s){
            r+=mp[i];
        }
        return stoi(r);
    }
    bool isSumEqual(string f, string s, string t) {
        string z="abcdefghijklmnopqrstuvwxyz";
        
        for(int i=0;i<z.size();i++){
            mp[z[i]]=to_string(i);
        }
        return dp(f)+dp(s)==dp(t);
    }
};