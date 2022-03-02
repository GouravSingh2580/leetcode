class Solution {
public:
    bool isSubsequence(string s, string t) {
        int c=0;
        for(int i=0;i<t.size();i++){
            if(s[c]==t[i]){c++;}
        }
        return c==s.size();
    }
};