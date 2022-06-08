class Solution {
public:
    bool isp(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    int removePalindromeSub(string s) {
        if(isp(s)) return 1;
        else return 2;
    }
};