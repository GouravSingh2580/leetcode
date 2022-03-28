class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.size() && t.size()>j){
            if(s[i]==t[j]) {
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i==s.size() || s.size()==0) return true;
        else return false;
    }
};