class Solution {
public:
    bool allup(string s){
        for(auto i:s) if (islower(i)) return false;
        return true;
    }
    bool alldown(string s){
        for(auto i:s) if (isupper(i)) return false;
        return true;
    }
    bool oneup(string s){
        if (!isupper(s[0])) return false;
        for(int i=1;i<size(s);i++) if (isupper(s[i])) return false;
        return true;
    }
    bool detectCapitalUse(string word) {
        if (allup(word) or alldown(word) or oneup(word)) return true;
        return false;
    }
};