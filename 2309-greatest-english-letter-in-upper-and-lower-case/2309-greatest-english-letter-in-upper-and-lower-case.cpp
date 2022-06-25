class Solution {
public:
    string greatestLetter(string s) {
        unordered_map<string,int>mp;
        for(auto i:s){
            mp[to_string(i)]++;
        }
        string ans="";
        for(auto i:s){
            if(mp[to_string(tolower(i))] && mp[to_string(toupper(i))]){
                ans+=(char)toupper(i);
            }
        }
        sort(ans.begin(),ans.end()); reverse(ans.begin(),ans.end());
        string f="";
        f=ans[0];
        if(size(ans)==0) return "";
        return f;
    }
};