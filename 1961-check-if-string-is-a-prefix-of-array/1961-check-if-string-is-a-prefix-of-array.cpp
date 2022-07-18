class Solution {
public:
    bool isPrefixString(string s, vector<string>& w) {
        string t="";
        for(auto i:w){
            t+=i;
            if(t==s) return true;
        }
        return false;
    }
};